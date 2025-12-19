#include "Analyzer.hpp"
#include "Benchmarker.hpp"
#include "Datasets.hpp"
#include "DatasetsConfig.hpp"
#include "ExtrasSetups_ParallelLaser.hpp"
#include "ExtrasSetups_ToF.hpp"
#include "Types.hpp"
#include "spirallolib.hpp"

#include <cmath>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <optional>
#include <set>
#include <vector>

using namespace WinCan::Spirallo;
using namespace WinCan::Spirallo::Benchmark;

namespace fs = std::filesystem;

const fs::path spiralloDir{R"(D:\Development\Spirallo\WinCanSpiralloComponent)"};
const fs::path defaultCameraConfigPath = spiralloDir / "configs/ParallelLaserDevices.json";
const fs::path defaultImageProcessingConfigPath =
    spiralloDir / "configs" / parallelLaserPresetsFilename;

const fs::path outputDir{R"(D:\Development\Spirallo\_Spirallo_OUT)"};
// const fs::path
// outputDir{R"(C:\WinCan_Projects\2025_07_25\Video\Sec\Spirallo)"};
const fs::path archiveDir{outputDir / "Archive"};
const fs::path toFixDir{outputDir / "ToFix"};

const fs::path analysisOutputRootDir{"D:\\Projects\\Spirallo\\Analysis"};
const fs::path framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};

enum class RunMode
{
    VideoToObj,
    VideoToObjNoTime,
    DistancesPxToObj,
    CsvToObj,
    FrameAnalysis,
    VideoSplit,
    VerifyVideoExtractor,
    Tof,
};

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    using WinCan::Spirallo::END_OF_VIDEO_TIME;
    using WinCan::Spirallo::Analyzer::AnalysisTarget;

    fs::path videoPath;
    fs::path vifPath;
    fs::path robotCsvFile;

    std::string setup; // Which configuration to test?

    std::map<RecordingId, FrameIds_t> framesToProcess;
    std::optional<std::vector<RealDistance_t>> crossSectionsDistancesAlongPipe{};
    std::optional<RealDistance_t> crossSectionsStepSize{};
    DistanceUnit projectDistanceUnit{DistanceUnit::Unknown};

    std::vector<std::filesystem::path> tofFiles;
    OutliersHandlingStrategy outsiderDataPointsHandlingStrategyForTof;

    // ==================================

    std::map<RecordingId, FrameIds_t> framesToProcess_thresholding{
        {RecordingId::iPEK4, {0, 16}},
        {RecordingId::Philipp6, {215, 249, 297, 685, 688}},
        {RecordingId::Philipp7, {111, 260, 290, 741}},
        {RecordingId::Philipp17, {4, 247}},
        {RecordingId::Philipp27, {0, 35}},
        {RecordingId::Philipp32, {59, 240}},
        {RecordingId::Philipp35, {0, 930, 957}},
        {RecordingId::Philipp36, {0, 8}},
        {RecordingId::Jim1, {0, 63}},
        {RecordingId::Jim7, {50, 120}},
        {RecordingId::Jim8, {524, 776}},
        {RecordingId::DobrzanskiMeters, {0, 26}},
        {RecordingId::Talha1, {0, 70}},
    };

    std::map<RecordingId, FrameIds_t> framesToProcess_large_dataset{
        {RecordingId::iPEK4, ALL_FRAME_IDS},
        {RecordingId::Philipp6, ALL_FRAME_IDS},
        {RecordingId::Philipp7, ALL_FRAME_IDS},
        {RecordingId::Philipp17, ALL_FRAME_IDS},
        {RecordingId::Philipp27, ALL_FRAME_IDS},
        {RecordingId::Philipp32, ALL_FRAME_IDS},
        {RecordingId::Philipp35, ALL_FRAME_IDS},
        {RecordingId::Philipp36, ALL_FRAME_IDS},
        {RecordingId::Jim1, ALL_FRAME_IDS},
        {RecordingId::Jim7, ALL_FRAME_IDS},
        {RecordingId::Jim8, ALL_FRAME_IDS},
        {RecordingId::DobrzanskiMeters, ALL_FRAME_IDS},
        {RecordingId::Talha1, ALL_FRAME_IDS},
    };

    std::map<RecordingId, FrameIds_t> framesToProcess_small_dataset{
        {RecordingId::iPEK4, {0, 16}},
        {RecordingId::Philipp17, {4, 247}},

    };

    //    framesToProcess = framesToProcess_small_dataset;

    framesToProcess = {{RecordingId::Jim8, ALL_FRAME_IDS}};

    FrameIds_t jim8frames;
    for (int i = 328; i <= 1849; ++i)
    {
        jim8frames.insert(i);
    }
    framesToProcess = {{RecordingId::Jim8, jim8frames}};

    framesToProcess = {{RecordingId::iPEK2Short, {}}};

    framesToProcess = {{RecordingId::Jim11_18in_lab, {}},
                       {RecordingId::Jim12_24in_lab, {}},
                       {RecordingId::Jim13_32in_lab, {}}};

    std::map<RecordingId, std::set<unsigned>> framesToProcess_remaining_for_tests{
        //        {RecordingId::Jim7, {100}},
        {RecordingId::Talha1, ALL_FRAME_IDS},

        //        {RecordingId::Philipp35, ALL_FRAME_IDS},  // egg-shaped; but why
        //        lying on the side?
        //        {RecordingId::Philipp36, ALL_FRAME_IDS},  // high fail rate for
        //        ImProc
    };

    // framesToProcess = framesToProcess_remaining_for_tests;

    // framesToProcess = {{RecordingId::Philipp38, ALL_FRAME_IDS}};
    // framesToProcess = {{RecordingId::Jim11_18in_lab, ALL_FRAME_IDS}};
    // framesToProcess = {{RecordingId::Talha7_RCX100, ALL_FRAME_IDS}};
    // framesToProcess = {{RecordingId::Talha8_RCX100, ALL_FRAME_IDS}};
    // framesToProcess = {{RecordingId::Talha9_RCX100, ALL_FRAME_IDS}};
    framesToProcess = {{RecordingId::Dobrzanski3d, ALL_FRAME_IDS}};

    framesToProcess = {{RecordingId::Extras1, ALL_FRAME_IDS}};
    // framesToProcess = {{RecordingId::Extras1, {3100, 3144, 3600, 3665, 3668,
    // 3671, 3674, 3677, 3800, 3900, 13341, 13374}}}; framesToProcess =
    // {{RecordingId::Extras1, {3100, 3144}}}; framesToProcess =
    // {{RecordingId::Philipp20, ALL_FRAME_IDS}};
    framesToProcess = {{RecordingId::Extras1, ALL_FRAME_IDS}}; // {72380}

    setup = "NONE";
    AnalysisTarget analysisTarget{AnalysisTarget::LASER_SPOT_POSITIONS};

    if (setup == "NONE")
    {
        // framesToProcess = {
        //     {RecordingId::Jim11_18in_lab, ALL_FRAME_IDS},
        // };
        projectDistanceUnit = DistanceUnit::Feet;

        //        crossSectionsDistancesAlongPipe = {{-22.3f, -20.0f, -13.3f}};
        crossSectionsStepSize = 0.1;
    }
    else if (setup == "Philipp38")
    {
        framesToProcess = {
            {RecordingId::Philipp38, ALL_FRAME_IDS},
        };
        projectDistanceUnit = DistanceUnit::Meter;
        crossSectionsStepSize = 0.2;
    }
    else if (setup == "Philipp39")
    {
        framesToProcess = {
            {RecordingId::Philipp39, ALL_FRAME_IDS},
        };
        projectDistanceUnit = DistanceUnit::Meter;
        crossSectionsStepSize = 0.2;
    }
    else if (setup == "Philipp35")
    {
        framesToProcess = {
            {RecordingId::Philipp35, ALL_FRAME_IDS},
        };
        projectDistanceUnit = DistanceUnit::Meter;
        crossSectionsStepSize = 0.1;
    }
    else if (setup == "Talha5_DN400_Ref1")
    {
        framesToProcess = {
            {RecordingId::Talha5_DN400_Ref1, ALL_FRAME_IDS},
        };
        projectDistanceUnit = DistanceUnit::Meter;
        crossSectionsStepSize = 0.1;
        // analysisTarget = AnalysisTarget::LASER_SPOT_POSITIONS;
    }
    else if (setup == "Talha6")
    {
        framesToProcess = {
            {RecordingId::Talha6, ALL_FRAME_IDS},
        };
        projectDistanceUnit = DistanceUnit::Meter;
        crossSectionsStepSize = 0.1;
    }
    else if (setup == "DobrzanskiMeters")
    {
        framesToProcess = {{RecordingId::DobrzanskiMeters, {}}};
        projectDistanceUnit = DistanceUnit::Meter;
    }
    else if (setup == "dummy1")
    {
        framesToProcess = {{RecordingId::Jim11_18in_lab, {}},
                           {RecordingId::Jim12_24in_lab, {}},
                           {RecordingId::Jim13_32in_lab, {}}};
        projectDistanceUnit = DistanceUnit::Feet;
    }
    else
    {
        std::cout << "[WARNING] Unknown setup: " << setup << std::endl;
    }

    // --------------------------------------------------------------
    // ToF
    // --------------------------------------------------------------

    // setup_philipp_1 | setup_marcin_2025_08_13_TOF_Spirallo |
    // setup_rajeesh_manual_fix | setup_albert_generic_diamond |
    // setup_pawel_generic_square | setup_tof_with_sensor_ids | setup_ToF_speed_100p
    setup_tof_with_sensor_ids(tofFiles, outsiderDataPointsHandlingStrategyForTof);

    // ------

    auto runMode{RunMode::Tof};
    // VideoToObj | FrameAnalysis | DistancesPxToObj | CsvToObj | VideoSplit |
    // VerifyVideoExtractor | VideoToObjNoTime | Tof

    // ==================================
    // ==================================

    //    WinCan::Spirallo::initializeLogger();

    auto recordings{getRecordingsData()};
    for (const auto& [recordingId, frameIds] : framesToProcess)
    {
        auto recordingEntry{recordings[recordingId]};

        auto recordingIdStrRaw{recordingEntry.recordingIdStr};
        std::cout << "Processing recording (RAW): " << recordingIdStrRaw << std::endl;
        auto recordingIdStr{recordingIdStrRaw};

        if (recordingEntry.isIncorrect)
        {
            std::cout << "This recording should NOT be used for analysis (reason: "
                      << *recordingEntry.isIncorrect << ")" << std::endl;
            continue;
        }

        if (! recordingEntry.containsCameraSwitching)
        {
            std::cout << "Camera switching flag for this video was not set - correct "
                         "it and then retry."
                      << std::endl;
            exit(-1);
        }

        if (recordingEntry.containsCameraSwitching.value())
        {
            std::cout << "The video includes camera switching - which is currently "
                         "not supported. Choose another recording."
                      << std::endl;
            exit(-1);
        }

        videoPath = getRootDir(recordingId) / recordingEntry.videoPath();
        vifPath = recordingEntry.vifPath(videoPath);
        auto imageProcessingConfigPath = defaultImageProcessingConfigPath;
        auto cameraName = recordingEntry.cameraName;
        auto cameraConfigPath = defaultCameraConfigPath;

        auto framesOutputDir{framesOutputRootDir / recordingIdStr};

        std::optional<double> calibrationSlope{};
        std::optional<double> calibrationIntercept{};

        WinCan::Spirallo::Time_t startTime{recordingEntry.startTime.value_or(0)};
        WinCan::Spirallo::Time_t stopTime{
            recordingEntry.stopTime.value_or(WinCan::Spirallo::END_OF_VIDEO_TIME)};

        auto distancesCsvFilepath = distancesPxDataFiles[recordingId];
        auto videoParametersFilepath = videoParametersDataFiles[recordingId];

        // iPEK4Short - debug
        //        startTime = 0.0;
        //        stopTime = 30;

        if (recordingId == RecordingId::Extras1)
        {
            // NOTE: Here you can manually override the default configuration.

            // ------------------------

            // std::filesystem::path
            // rootDir{"D:/Projects/Spirallo/Videos/Tomasz_Dobrzanski/2025_03_20_r1"};
            // std::string
            // recordingStem{"sec5_f64a49cb-0185-40fc-9bd2-b89bdf93bb16ad672cc2-7dc8-47a4-b493-ae8e53738f86"};
            // videoPath = rootDir / (recordingStem + ".mp4");
            // vifPath = rootDir / (recordingStem + ".txt");
            // cameraName = "Ipek RCX100";

            // imageProcessingConfigPath = rootDir/ "ParallelLaserPresets.json";

            // distancesCsvFilepath = rootDir /
            // "spirallo_output_20250321_121728_dist_px_1.csv";
            // videoParametersFilepath = rootDir /
            // "spirallo_output_20250321_121728_video_params_1.json";

            // stopTime = 2.0;

            // ------------------------

            // std::filesystem::path
            // rootDir{"D:/Projects/Spirallo/Videos/Marcin/High_Speed_Spirallo
            // [2025-03-25]/Video/Sec"}; std::string recordingStem{"speed and camera
            // 100% Aperture
            // +3_27889ac2-fd4c-4d42-ab2f-808e0cbce9f805d7c172-33b2-4d99-916a-c84587f4aabf"};
            // videoPath = rootDir / (recordingStem + ".mp4");
            // vifPath = rootDir / (recordingStem + ".txt");
            // cameraName = "Ipek RCX100";

            // imageProcessingConfigPath = rootDir/ "ParallelLaserPresets.json";

            // distancesCsvFilepath = rootDir /
            // "spirallo_output_20250321_121728_dist_px_1.csv";
            // videoParametersFilepath = rootDir /
            // "spirallo_output_20250321_121728_video_params_1.json";

            // ------------------------

            // std::filesystem::path
            // rootDir{"D:/Projects/Spirallo/Videos/Tomasz_Dobrzanski/2025_03_20_r1"};
            // std::string
            // recordingStem{"sec5_f64a49cb-0185-40fc-9bd2-b89bdf93bb16ad672cc2-7dc8-47a4-b493-ae8e53738f86"};
            // videoPath = rootDir / (recordingStem + ".mp4");
            // vifPath = rootDir / (recordingStem + ".txt");

            // std::filesystem::path
            // rootConfDir{"D:/Projects/Spirallo/Videos/_PLAYGROUND"};

            // cameraConfigPath = rootConfDir / "ParallelLaserDevices.json";
            // imageProcessingConfigPath = rootConfDir / "ParallelLaserPresets.json";
            // cameraName = "RCX90 HD xx";

            // ------------------------

            std::filesystem::path rootDir{"D:/Projects/Spirallo/Videos/EXTRAS/"
                                          "3-28-2025 CELEBRATION/Video/Sec/"};
            std::string recordingStem{
                "4_8_2025 11_57_04 "
                "AM_fa041f15-5712-43e2-8011-d8d0f1b4c75f369de82a-bc74-4ea2-98dc-"
                "46f761f74b0b"};
            videoPath = rootDir / (recordingStem + ".mp4");
            vifPath = rootDir / (recordingStem + ".txt");

            // std::filesystem::path
            // rootConfDir{"D:/Projects/Spirallo/Videos/_PLAYGROUND"};
            // cameraConfigPath = rootConfDir / "ParallelLaserDevices.json";
            // imageProcessingConfigPath = rootConfDir / "ParallelLaserPresets.json";
            cameraName = "Ipek RCX90 new";

            // startTime = 20.0;
            // stopTime = 25.0;

            // ------------------------
            // setupKeithP002a | setup_VideoWithDefect | setup_badSign |
            // setup_WVX_10902 | setup_Kamil_2025_07_15_rejections
            // setup_RCX90X_DN150_video1 | setup_RCX90X_DN150_video2 |
            // setup_RCX90X_DN200_video1 | setup_RCX90X_DN200_video2 |
            // setup_RCX100_Horizontal_DN150_video1 |
            // setup_RCX100_Horizontal_DN150_video2 |
            // setup_RCX100_Vertical_DN150_video1 | setup_RCX100_Vertical_DN150_video2
            // setup_RCX100_Horizontal_DN200_video1 |
            // setup_RCX100_Horizontal_DN200_video2 |
            // setup_RCX100_Vertical_DN200_video1 | setup_RCX100_Vertical_DN200_video2
            // setup_no_cross_sections_20250729
            // setup_hang_on_exec_finished | setup_peak_1|2|3 |
            // setup_speed_20250923_RCX100_100p
            setup_augmentation_worse_rcx100hdv_s1(recordingIdStr,
                                                  videoPath,
                                                  vifPath,
                                                  cameraName,
                                                  projectDistanceUnit,
                                                  startTime,
                                                  stopTime,
                                                  crossSectionsDistancesAlongPipe,
                                                  imageProcessingConfigPath,
                                                  cameraConfigPath,
                                                  framesOutputDir,
                                                  calibrationSlope,
                                                  calibrationIntercept,
                                                  robotCsvFile,
                                                  distancesCsvFilepath,
                                                  videoParametersFilepath);
        }

        // if (setup == "RCX100")
        // {
        //     stopTime = 2.0;
        // }
        // if (setup == "Tomasz3a")
        // {
        //     startTime = 3.0;
        //     stopTime = 31.0;
        // }

        // if (setup == "Talha5_DN400_Ref1")
        // {
        //     // stopTime = 10.0;
        //     cameraName = "Ipek RCX90 new";
        // }  else if (setup == "Talha6")
        // {
        //     cameraConfigPath =
        //     fs::path{"C:/Development/Spirallo/configs/ParallelLaserDevices_NoLensDistortion.json"};
        //     calibrationSlope = 0.017;
        //     calibrationIntercept = 1802.67;
        // } else if (setup == "Philipp40")
        // {
        //     startTime = 0.30000001192092896;
        //     stopTime = 54.400001525878906;
        //     stopTime = 3.0;
        // } else if (setup == "dummy1") {
        //     stopTime = 5.0;
        // }

        std::cout << "Processing recording (actual): " << recordingIdStr << std::endl;

        int res;
        switch (runMode)
        {
        case RunMode::VideoToObj:
        {
            res = WinCan::Spirallo::generatePipeGeometryObjFileFromVideo(
                videoPath.string(),
                vifPath.string(),
                outputDir.string(),
                cameraConfigPath.string(),
                imageProcessingConfigPath.string(),
                cameraName,
                startTime,
                stopTime,
                calibrationSlope,
                calibrationIntercept,
                recordingIdStr);
            break;
        }

        case RunMode::VideoToObjNoTime:
        {
            res = WinCan::Spirallo::generatePipeGeometryObjFileFromVideo(
                videoPath.string(),
                vifPath.string(),
                outputDir.string(),
                cameraConfigPath.string(),
                imageProcessingConfigPath.string(),
                cameraName);
            break;
        }

        case RunMode::DistancesPxToObj:
        {
            res = WinCan::Spirallo::generatePipeGeometryObjFileFromDistancesCsv(
                distancesCsvFilepath,
                videoParametersFilepath,
                cameraConfigPath.string(),
                cameraName,
                vifPath.string(),
                outputDir.string(),
                recordingIdStr);
            break;
        }

        case RunMode::CsvToObj:
        {
            if (robotCsvFile.empty())
            {
                robotCsvFile = robotDataFiles[recordingId];
            }

            // FIXME: Extract Unit from VIF.
            WinCan::Spirallo::Analyzer::setProjectDistanceUnit(projectDistanceUnit);

            res = WinCan::Spirallo::Analyzer::generatePipeGeometryObjFileFromRawCsv(
                recordingIdStr,
                robotCsvFile,
                crossSectionsDistancesAlongPipe,
                crossSectionsStepSize,
                outputDir.string());
            break;
        }

        case RunMode::FrameAnalysis:
        {
            std::cout << "Analyzing individual frames..." << std::endl;

            std::filesystem::path analysisOutputDir{analysisOutputRootDir / recordingIdStr};
            std::filesystem::create_directory(analysisOutputDir);

            using namespace WinCan::Spirallo::Analyzer;

            bool isTimeSpanNeeded{frameIds.empty() and (startTime or stopTime)};
            std::optional<WinCan::Spirallo::TimeSpan> timeSpan{
                isTimeSpanNeeded
                    ? std::make_optional<WinCan::Spirallo::TimeSpan>(startTime, stopTime)
                    : std::nullopt};

            res = WinCan::Spirallo::Analyzer::analyzeVideoFrames(videoPath.string(),
                                                                 frameIds,
                                                                 vifPath.string(),
                                                                 recordingIdStr,
                                                                 cameraConfigPath.string(),
                                                                 imageProcessingConfigPath.string(),
                                                                 cameraName,
                                                                 analysisTarget,
                                                                 crossSectionsDistancesAlongPipe,
                                                                 timeSpan);

            break;
        }

        case RunMode::VideoSplit:
        {
            std::filesystem::create_directory(framesOutputDir);
            std::cout << "Writing frames to: " << framesOutputDir << std::endl;
            res = WinCan::Spirallo::Analyzer::splitVideoIntoFrames(
                recordingIdStr, videoPath.string(), framesOutputDir.string());
            break;
        }

        case RunMode::VerifyVideoExtractor:
        {
            res = WinCan::Spirallo::Analyzer::verifyVideoMeasurementDataExtractor(
                videoPath.string(),
                vifPath.string(),
                cameraConfigPath.string(),
                imageProcessingConfigPath.string(),
                cameraName,
                {0, 300, 500, 700});
            break;
        }

        case RunMode::Tof:
        {
            vifPath =
                R"(D:\Development\Spirallo\spirallo_runner/data/dummyVifData.txt)"; // FIXME: Use
                                                                                    // relative
                                                                                    // path.
            std::string outsiderDataPointsHandlingStrategyForTofStr{
                handlingStrategyLabels.at(outsiderDataPointsHandlingStrategyForTof)};
            for (const auto& tofDataPath : tofFiles)
            {
                res = WinCan::Spirallo::generatePipeGeometryObjFileFromTofData(
                    vifPath.string(),
                    tofDataPath.string(),
                    outputDir.string(),
                    std::nullopt,
                    std::make_optional(outsiderDataPointsHandlingStrategyForTofStr));
            }

            break;
        }
        }

        UNUSED(res);
    }

    std::cout << "Spirallo Runner: FINISHED" << std::endl;

    return 0;
}

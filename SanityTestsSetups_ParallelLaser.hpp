#pragma once

#include "Types.hpp"

#include <filesystem>
#include <map>
#include <optional>
#include <set>
#include <vector>

#define UNUSED(expr)                                                                               \
    do                                                                                             \
    {                                                                                              \
        (void)(expr);                                                                              \
    }                                                                                              \
    while (0);

using namespace WinCan::Spirallo;

namespace fs = std::filesystem;

void setup_SanityTest__2026_01_14_Spirallo_Laser_VX_18_1__crawler20p_camera50p(
    std::string& recordingIdStr,
    fs::path& videoPath,
    fs::path& vifPath,
    std::string& cameraName,
    DistanceUnit& projectDistanceUnit,
    WinCan::Spirallo::Time_t& startTime,
    WinCan::Spirallo::Time_t& stopTime,
    std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
    fs::path& imageProcessingConfigPath,
    fs::path& cameraConfigPath,
    fs::path& framesOutputDir,
    std::optional<double>& calibrationSlope,
    std::optional<double>& calibrationIntercept,
    fs::path& robotCsvFile,
    fs::path& distancesCsvFilepath,
    fs::path& videoParametersFilepath)
{
    recordingIdStr =
        R"(crawler 20% camera 50 %_8573a323-9df6-448a-9da2-7661e6a5650b7cddaa9e-4b3f-4e4d-8dc9-f7acbbf48cec)";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\2026_01_14_Spirallo_Laser_VX_18_1\Video\Sec)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    startTime = 0.344;
    stopTime = 42.76;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_SanityTest__2026_01_14_Spirallo_Laser_VX_18_1__crawler50p_camera70p(
    std::string& recordingIdStr,
    fs::path& videoPath,
    fs::path& vifPath,
    std::string& cameraName,
    DistanceUnit& projectDistanceUnit,
    WinCan::Spirallo::Time_t& startTime,
    WinCan::Spirallo::Time_t& stopTime,
    std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
    fs::path& imageProcessingConfigPath,
    fs::path& cameraConfigPath,
    fs::path& framesOutputDir,
    std::optional<double>& calibrationSlope,
    std::optional<double>& calibrationIntercept,
    fs::path& robotCsvFile,
    fs::path& distancesCsvFilepath,
    fs::path& videoParametersFilepath)
{
    recordingIdStr =
        R"(crawler 50% camera 70 %_03d1ce9f-df18-4941-90e5-0169a344a2f2c1eb91d4-6ce0-4f39-88be-750903049296)";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\2026_01_14_Spirallo_Laser_VX_18_1\Video\Sec)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    startTime = 0.312;
    stopTime = 17.203;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_SanityTest__2026_01_14_Spirallo_Laser_VX_18_1__crawler70p_camera70p(
    std::string& recordingIdStr,
    fs::path& videoPath,
    fs::path& vifPath,
    std::string& cameraName,
    DistanceUnit& projectDistanceUnit,
    WinCan::Spirallo::Time_t& startTime,
    WinCan::Spirallo::Time_t& stopTime,
    std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
    fs::path& imageProcessingConfigPath,
    fs::path& cameraConfigPath,
    fs::path& framesOutputDir,
    std::optional<double>& calibrationSlope,
    std::optional<double>& calibrationIntercept,
    fs::path& robotCsvFile,
    fs::path& distancesCsvFilepath,
    fs::path& videoParametersFilepath)
{
    recordingIdStr =
        R"(crawler 70% camera 70 %_26471398-c976-4448-8fdb-ad959a389e12e255ea0e-caeb-4729-bbb0-36449e87b2ed)";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\2026_01_14_Spirallo_Laser_VX_18_1\Video\Sec)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    startTime = 0.0780;
    stopTime = 12.0310;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_SanityTest__2026_01_14_Spirallo_Laser_VX_18_1__crawler80p_camera70p(
    std::string& recordingIdStr,
    fs::path& videoPath,
    fs::path& vifPath,
    std::string& cameraName,
    DistanceUnit& projectDistanceUnit,
    WinCan::Spirallo::Time_t& startTime,
    WinCan::Spirallo::Time_t& stopTime,
    std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
    fs::path& imageProcessingConfigPath,
    fs::path& cameraConfigPath,
    fs::path& framesOutputDir,
    std::optional<double>& calibrationSlope,
    std::optional<double>& calibrationIntercept,
    fs::path& robotCsvFile,
    fs::path& distancesCsvFilepath,
    fs::path& videoParametersFilepath)
{
    recordingIdStr =
        R"(crawler 80% camera 70 %_976865e4-b9c2-406c-bdb4-1cacd17b3cfc2a0b4887-4f77-4b3a-ac98-95ce60b2493e)";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\2026_01_14_Spirallo_Laser_VX_18_1\Video\Sec)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    startTime = 0.312;
    stopTime = 10.734;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_SanityTest__2026_01_14_Spirallo_Laser_VX_18_1__crawler90p_camera70p(
    std::string& recordingIdStr,
    fs::path& videoPath,
    fs::path& vifPath,
    std::string& cameraName,
    DistanceUnit& projectDistanceUnit,
    WinCan::Spirallo::Time_t& startTime,
    WinCan::Spirallo::Time_t& stopTime,
    std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
    fs::path& imageProcessingConfigPath,
    fs::path& cameraConfigPath,
    fs::path& framesOutputDir,
    std::optional<double>& calibrationSlope,
    std::optional<double>& calibrationIntercept,
    fs::path& robotCsvFile,
    fs::path& distancesCsvFilepath,
    fs::path& videoParametersFilepath)
{
    recordingIdStr =
        R"(crawler 90% camera 70 %_ccc99d6f-058e-4d64-8ffc-931c6702a0684610411b-dbac-479a-a13f-5a5ed757f8ed)";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\2026_01_14_Spirallo_Laser_VX_18_1\Video\Sec)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    startTime = 0.375;
    stopTime = 9.666;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

// clang-format off
// void setup_SanityTest__1040045201HA90(
//     std::string& recordingIdStr,
//     fs::path& videoPath,
//     fs::path& vifPath,
//     std::string& cameraName,
//     DistanceUnit& projectDistanceUnit,
//     WinCan::Spirallo::Time_t& startTime,
//     WinCan::Spirallo::Time_t& stopTime,
//     std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
//     fs::path& imageProcessingConfigPath,
//     fs::path& cameraConfigPath,
//     fs::path& framesOutputDir,
//     std::optional<double>& calibrationSlope,
//     std::optional<double>& calibrationIntercept,
//     fs::path& robotCsvFile,
//     fs::path& distancesCsvFilepath,
//     fs::path& videoParametersFilepath)
// {
//     recordingIdStr = R"(1040045201_c861c902-c5f1-454e-b5fa-772aac13d9ef)";
//
//     std::filesystem::path rootDir{
//         R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\Spiralo 1040045201HA90\Video\Sec)"};
//     std::string recordingStem{recordingIdStr};
//     videoPath = rootDir / (recordingStem + ".mp4");
//     vifPath = rootDir / (recordingStem + ".txt");
//     projectDistanceUnit = DistanceUnit::Meter;
//     cameraName = "Ipek RCX100 HD Serie V";
//
//     startTime = 4.19;
//     stopTime = 632.22;
//     UNUSED(crossSectionsDistancesAlongPipe);
//     UNUSED(imageProcessingConfigPath);
//     UNUSED(cameraConfigPath);
//     UNUSED(framesOutputDir);
//     UNUSED(calibrationSlope);
//     UNUSED(calibrationIntercept);
//     UNUSED(robotCsvFile);
//     UNUSED(distancesCsvFilepath);
//     UNUSED(videoParametersFilepath);
// }
// clang-format on

void setup_SanityTest__VX_17_6__RCX90_crawler20p_camera100p(
    std::string& recordingIdStr,
    fs::path& videoPath,
    fs::path& vifPath,
    std::string& cameraName,
    DistanceUnit& projectDistanceUnit,
    WinCan::Spirallo::Time_t& startTime,
    WinCan::Spirallo::Time_t& stopTime,
    std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
    fs::path& imageProcessingConfigPath,
    fs::path& cameraConfigPath,
    fs::path& framesOutputDir,
    std::optional<double>& calibrationSlope,
    std::optional<double>& calibrationIntercept,
    fs::path& robotCsvFile,
    fs::path& distancesCsvFilepath,
    fs::path& videoParametersFilepath)
{
    recordingIdStr =
        R"(RCX90 default speed 20% crawler and 100% camera_d10fb05d-2dc7-4eba-89d0-02dfdea0b3b4dc897bd9-87f2-4aea-beea-8cfe34d13e15)";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\VX_17_6 Release Tests\Video\Sec)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    startTime = 0.172;
    stopTime = 41.094;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_SanityTest__VX_17_6__RCX90X_crawler20p_camera100p(
    std::string& recordingIdStr,
    fs::path& videoPath,
    fs::path& vifPath,
    std::string& cameraName,
    DistanceUnit& projectDistanceUnit,
    WinCan::Spirallo::Time_t& startTime,
    WinCan::Spirallo::Time_t& stopTime,
    std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
    fs::path& imageProcessingConfigPath,
    fs::path& cameraConfigPath,
    fs::path& framesOutputDir,
    std::optional<double>& calibrationSlope,
    std::optional<double>& calibrationIntercept,
    fs::path& robotCsvFile,
    fs::path& distancesCsvFilepath,
    fs::path& videoParametersFilepath)
{
    recordingIdStr =
        R"(RCX90X default speed 20% crawler and 100% camera_adf47987-826d-4680-bb83-387283370a8519179636-00a0-4b50-b791-cbb1fca4c5fb)";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\VX_17_6 Release Tests\Video\Sec)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90X HD";

    startTime = 0.235;
    stopTime = 41.454;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_SanityTest__VX_17_6__RCX100_crawler20p_camera100p(
    std::string& recordingIdStr,
    fs::path& videoPath,
    fs::path& vifPath,
    std::string& cameraName,
    DistanceUnit& projectDistanceUnit,
    WinCan::Spirallo::Time_t& startTime,
    WinCan::Spirallo::Time_t& stopTime,
    std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
    fs::path& imageProcessingConfigPath,
    fs::path& cameraConfigPath,
    fs::path& framesOutputDir,
    std::optional<double>& calibrationSlope,
    std::optional<double>& calibrationIntercept,
    fs::path& robotCsvFile,
    fs::path& distancesCsvFilepath,
    fs::path& videoParametersFilepath)
{
    recordingIdStr =
        R"(RCX100 crawler  20% 100% camera and joystick 14%_333462ad-2427-4813-bda5-ff28af2ffe6722dfec6d-bd11-424f-a2de-67177fb401dd)";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Spirallo sanity tests\VX_17_6 Release Tests\Video\Sec)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    startTime = 0.047;
    stopTime = 42.407;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

// void setup_SanityTest_FIXME(
//     std::string& recordingIdStr,
//     fs::path& videoPath,
//     fs::path& vifPath,
//     std::string& cameraName,
//     DistanceUnit& projectDistanceUnit,
//     WinCan::Spirallo::Time_t& startTime,
//     WinCan::Spirallo::Time_t& stopTime,
//     std::optional<std::vector<RealDistance_t>>& crossSectionsDistancesAlongPipe,
//     fs::path& imageProcessingConfigPath,
//     fs::path& cameraConfigPath,
//     fs::path& framesOutputDir,
//     std::optional<double>& calibrationSlope,
//     std::optional<double>& calibrationIntercept,
//     fs::path& robotCsvFile,
//     fs::path& distancesCsvFilepath,
//     fs::path& videoParametersFilepath)
// {
//     recordingIdStr = "RECORDING_ID";

//     std::filesystem::path rootDir{
//                                   R"(D:\Projects\Spirallo\Videos\Spirallo sanity
//                                   tests\RELATIVE_PATH)"};
//     std::string recordingStem{recordingIdStr};
//     videoPath = rootDir / (recordingStem + ".mp4");
//     vifPath = rootDir / (recordingStem + ".txt");
//     projectDistanceUnit = DistanceUnit::Meter;
//     cameraName = "CAMERA_NAME";

//     UNUSED(startTime);
//     UNUSED(stopTime);
//     UNUSED(crossSectionsDistancesAlongPipe);
//     UNUSED(imageProcessingConfigPath);
//     UNUSED(cameraConfigPath);
//     UNUSED(framesOutputDir);
//     UNUSED(calibrationSlope);
//     UNUSED(calibrationIntercept);
//     UNUSED(robotCsvFile);
//     UNUSED(distancesCsvFilepath);
//     UNUSED(videoParametersFilepath);
// }

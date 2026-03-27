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

void setup_hang_on_exec_finished(
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
    recordingIdStr = "dummy";

    // videoPath = std::filesystem::path{
    //     R"(D:/Development/Spirallo/WinCanSpiralloComponent/test/input_data/videos/16x20_14_frames_vertical.mp4)"};
    // vifPath = std::filesystem::path{
    //     R"(D:/Development/Spirallo/WinCanSpiralloComponent/test/input_data/videos/16x20_14_frames.txt)"};
    // projectDistanceUnit = DistanceUnit::Meter;
    // cameraName = "Ipek RCX90 new";

    std::filesystem::path rootDir{R"(D:\Projects\Spirallo\Videos\EXTRAS\spirallo_no_output)"};
    std::string recordingStem{"7_29_2025 9_18_43 AM_20157da2-e98a-440e-9f68-638092f11b91"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // startTime = 1515.0; // 25'15"
    // stopTime = 25.0;

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setupKeithP002a(std::string& recordingIdStr,
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
    recordingIdStr = "KeithP002a";

    std::filesystem::path rootDir{"D:/Projects/Spirallo/Videos/Keith/P002_05-02-2025 Wellen Park "
                                  "Highschool Storm Prelim/Video/Sec/"};
    std::string recordingStem{
        "Existing North WLD Left Side-Existing North WLD Left Side_05.02.2025_4"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Feet;
    cameraName = "Ipek RCX90 new";

    // FYI
    const fs::path framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    framesOutputDir = framesOutputRootDir / recordingIdStr;

    startTime = 1515.0; // 25'15"
                        // stopTime = 25.0;

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_VideoWithDefect(
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
    recordingIdStr = "Video_with_defect";

    std::filesystem::path rootDir{
        "D:/Projects/Spirallo/Videos/Marcin/Video_with_defect/Video/Sec/"};
    // std::string
    // recordingStem{"RCX90_3_f9fb1c0e-3d01-44bc-b175-26c8516131bfbe2893ca-1540-41da-a412-20422e1bc8ae"};
    std::string recordingStem{"RCX100_3_a777cd6a-b5d2-4f84-b30a-"
                              "1acc4f5d00c98d4aa32f-db02-4885-92fd-32eed0fdce08"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_badSign(std::string& recordingIdStr,
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
    recordingIdStr = "bad_pan_sign";

    std::filesystem::path rootDir{
        "D:/Projects/Spirallo/Videos/EXTRAS/Spirallo_with_defects_1/Video/Sec"};
    std::string recordingStem{"DCX90 crawler +40% camer "
                              "100%_8fcf5cdd-d322-4e3f-b206-d05773c5fdb346663c9c-"
                              "b6eb-4ef9-af11-f83346befc3b"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_WVX_10902(std::string& recordingIdStr,
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
    recordingIdStr = "WVX_10902";

    std::filesystem::path rootDir{"D:/Projects/Spirallo/Videos/EXTRAS/WVX-10902/"
                                  "Video_with_defect/Video/Sec"};
    std::string recordingStem{"RCX90_1_8a814c57-f7c1-41b7-a961-"
                              "038dcba5f45da614d329-ba9a-469e-8256-1c73cfc65f5e"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_Kamil_2025_07_15_rejections(
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
    recordingIdStr = "WVX_10902";

    std::filesystem::path rootDir{"D:/Projects/Spirallo/Videos/EXTRAS/Albert_2025_07_15/Video/Sec"};
    std::string recordingStem{"7_16_2025 1_57_03 PM_8bbea82e-e586-47ae-9f89-75ba46d489c9"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX90X_DN150_video1(
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
    recordingIdStr = "RCX90X_DN150_20250717_1033";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX90X-DN150)"};
    std::string recordingStem{"2025-07-17_10-33_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90X HD";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX90X_DN150_video2(
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
    recordingIdStr = "RCX90X_DN150_20250717_1035";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX90X-DN150)"};
    std::string recordingStem{"2025-07-17_10-35_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90X HD";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX90X_DN200_video1(
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
    recordingIdStr = "RCX90X_DN200_20250717_1038";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX90X-DN200)"};
    std::string recordingStem{"2025-07-17_10-38_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90X HD";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX90X_DN200_video2(
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
    recordingIdStr = "RCX90X_DN200_20250717_1039";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX90X-DN200)"};
    std::string recordingStem{"2025-07-17_10-39_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90X HD";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX100_Horizontal_DN150_video1(
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
    recordingIdStr = "RCX100_H_DN150_20250715_1305";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX100HD (V&H) - DN150\RCX100-LeftRight-DN150)"};
    std::string recordingStem{"2025-07-15_13-05_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX100_Horizontal_DN150_video2(
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
    recordingIdStr = "RCX100_H_DN150_20250715_1308";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX100HD (V&H) - DN150\RCX100-LeftRight-DN150)"};
    std::string recordingStem{"2025-07-15_13-08_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX100_Vertical_DN150_video1(
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
    recordingIdStr = "RCX100_V_DN150_20250715_1220";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX100HD (V&H) - DN150\RCX100-TopDown-DN150)"};
    std::string recordingStem{"2025-07-15_12-20_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX100_Vertical_DN150_video2(
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
    recordingIdStr = "RCX100_V_DN150_20250715_1222";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX100HD (V&H) - DN150\RCX100-TopDown-DN150)"};
    std::string recordingStem{"2025-07-15_12-22_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX100_Horizontal_DN200_video1(
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
    recordingIdStr = "RCX100_H_DN200_20250715_1401";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX100HD (V&H) - DN200\RCX100-LeftRight-DN200)"};
    std::string recordingStem{"2025-07-15_14-01_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX100_Horizontal_DN200_video2(
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
    recordingIdStr = "RCX100_H_DN200_20250715_1402";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX100HD (V&H) - DN200\RCX100-LeftRight-DN200)"};
    std::string recordingStem{"2025-07-15_14-02_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX100_Vertical_DN200_video1(
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
    recordingIdStr = "RCX100_V_DN200_20250715_1247";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX100HD (V&H) - DN200\RCX100-TopDown-DN200)"};
    std::string recordingStem{"2025-07-15_12-47_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_RCX100_Vertical_DN200_video2(
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
    recordingIdStr = "RCX100_V_DN200_20250715_1250";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\RCX100HD-RCX90X\RCX100HD (V&H) - DN200\RCX100-TopDown-DN200)"};
    std::string recordingStem{"2025-07-15_12-50_0001"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // // FYI
    // const fs::path
    // framesOutputRootDir{"D:\\Projects\\Spirallo\\Benchmark_Frames"};
    // framesOutputDir = framesOutputRootDir / recordingIdStr;

    // startTime = 1515.0;  // 25'15"
    // stopTime = 25.0;

    // robotCsvFile = "spirallo_output_20250522_173852_robot_1.csv";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_no_cross_sections_20250729(
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
    recordingIdStr = "no_cross_sections_20250729";

    std::filesystem::path rootDir{R"(D:\Projects\Spirallo\Videos\EXTRAS\spirallo_no_output)"};
    std::string recordingStem{"7_29_2025 9_18_43 AM_20157da2-e98a-440e-9f68-638092f11b91"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_peak_1(std::string& recordingIdStr,
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
    recordingIdStr = "peak_baud9600_1";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Talha\wincan17.7.88_dcx4.8.0rc5_rcx100v8.56.254_baudrate9600_01\Video\Sec)"};
    std::string recordingStem{"12_11_2025 "
                              "10_14_35_9f18f488-28c1-4d7c-87e5-"
                              "bbb9c8233967c8610f73-9407-43b0-9d9d-07855efca816"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    startTime = 4.4;
    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_peak_2(std::string& recordingIdStr,
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
    recordingIdStr = "peak_baud9600_B";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Talha\wincan17.7.88_dcx4.8.0rc5_rcx100v8.56.254_baudrate9600_01\Video\Sec)"};
    std::string recordingStem{"12_11_2025 "
                              "10_22_16_53c37cb6-cee2-4515-9a44-"
                              "30e0cb5e10170dd89d77-9a0e-4234-aedb-396e35f0c578"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // startTime = 4.4;
    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_peak_3(std::string& recordingIdStr,
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
    recordingIdStr = "peak_baud115200";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Talha\wincan17.7.88_dcx4.8.0rc7_rcx100v8.56.254_baudrate115200_01\Video\Sec)"};
    std::string recordingStem{
        R"(12_11_2025 12_45_24_803d1a66-05d0-49f8-8245-3e5b913f8fed213f52ec-8607-4887-9e3f-0e7daf77a81a)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // startTime = 4.4;
    UNUSED(startTime);
    UNUSED(stopTime);
    stopTime = 45.11;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    distancesCsvFilepath = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                         + "baudrate115200_dist_px.csv";
    UNUSED(videoParametersFilepath);
    videoParametersFilepath = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                            + "baudrate115200_video_params.json";
}

void setup_speed_20250923_RCX100_100p(
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
    recordingIdStr = "speed_20250923_RCX100_100p";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Marcin\2025_09_23_RCX100_high_Speed_Test\Video\Sec)"};
    std::string recordingStem{"RCX100 camera 70 % crawler "
                              "100%_372a6183-c9be-4937-9008-eb932456311f25ec21b4-"
                              "5f38-49a9-ac63-79796ba474fe"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // startTime = 4.4;
    UNUSED(startTime);
    UNUSED(stopTime);
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    robotCsvFile = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\)"}
                 + "speed_20250923_RCX100_70%100%.csv";
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_speed_20250923_RCX100_80p_c1(
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
    recordingIdStr = "speed_20250923_RCX100_80p_c1";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Marcin\2025_09_23_RCX100_high_Speed_Test\Video\Sec)"};
    std::string recordingStem{"RCX100 camera 70 % crawler "
                              "80%_5dfd8176-3f6f-4936-813f-a1990e93a0e8ef1fa29f-"
                              "a3e7-4877-8cd0-c771eb20cd56"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // startTime = 4.4;
    UNUSED(startTime);
    UNUSED(stopTime);
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    robotCsvFile = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\Archive\)"}
                 + "setup_speed_20250923_RCX100_80p_c1.csv";
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_augmentation_worse_rcx100hdv_s1(
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
    recordingIdStr = "augmentation_worse_rcx100hdv_s1";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Marcin\dcx_4.7.0_rc22_vx_17.6.22_rcx100hdv_02\Video\Sec)"};
    std::string recordingStem{"08_10_2025 09_49_45_41f3e564-002b-4417-8cce-671f62ddfeef"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    // startTime = 4.4;
    UNUSED(startTime);
    UNUSED(stopTime);
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    robotCsvFile = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                 + "augmentation_worse_rcx100hdv_s1.csv";
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_2025_12_22_spir_AM_RCX100_joy_speed_100_crawler_100(
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
    recordingIdStr = "2025_12_22_spir_AM_RCX100_joy_speed_100_crawler_100";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\SPIR-259\2025_12_22_spir_AM_RCX100\Video\Sec)"};
    std::string recordingStem{"joy_speed_100_crawler_100_3c8caf65-5aae-4173-9e3a-"
                              "f25ab679299fecf61597-ce6d-4a6c-b212-0d7f5ccf6bda"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + "_modified.txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_2025_12_22_spir_AM_RCX100_MOD_joy_speed_100_crawler_100(
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
    recordingIdStr = "2025_12_22_spir_AM_RCX100_MOD_joy_speed_100_crawler_100";

    std::filesystem::path rootDir{
        R"(C:\WinCan_Projects\2025_12_22_spir_AM_RCX100_modified\Video\Sec)"};
    std::string recordingStem{"joy_speed_100_crawler_100_3c8caf65-5aae-4173-9e3a-"
                              "f25ab679299fecf61597-ce6d-4a6c-b212-0d7f5ccf6bda"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_1040045201HA90_sec1(
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
    recordingIdStr = "ThorstenS1";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\iPEK\Spiralo 1040045201HA90\Video\Sec)"};
    std::string recordingStem{"19.01.2026 11_59_44_99d6f529-25f7-46fc-b9e9-95704396ebcf"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_1040045201HA90_sec2(
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
    recordingIdStr = "ThorstenS2";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\iPEK\Spiralo 1040045201HA90\Video\Sec)"};
    std::string recordingStem{"1040045201_c861c902-c5f1-454e-b5fa-772aac13d9ef"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    UNUSED(stopTime);
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

void setup_1040045201HA90_sec3(
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
    recordingIdStr = "ThorstenS3";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\iPEK\Spiralo 1040045201HA90\Video\Sec)"};
    std::string recordingStem{"1040045202_638067ab-4ff3-4d83-9ac5-9dbdf84ec34a"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    UNUSED(stopTime);
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    // UNUSED(robotCsvFile);
    robotCsvFile =
        std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"} + "ThorstenS3_robot.csv";
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_2026_01_14_Spirallo_Laser_VX_18_1_RCX100_H_crawler_20p_camera_100p(
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
    recordingIdStr = "2026-01-14_craw-20_cam-100";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\Marcin\2026_01_14_Spirallo_Laser_VX_18_1_RCX100_H\Video\Sec)"};
    std::string recordingStem{
        R"(crawler 20% camera 100 %_29a6f438-464c-417e-9866-23b96019f02edf194926-a549-4aa9-abe6-6d54569aadef)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    UNUSED(startTime);
    UNUSED(stopTime);
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    // UNUSED(robotCsvFile);
    robotCsvFile = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                 + "2026-01-14_craw-20_cam-100.csv";
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_AU_20260209_spikes(
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
    recordingIdStr = "AU_spikes";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\See Civil Trunk Main Ovality Final CCTV\Video\Sec)"};
    std::string recordingStem{
        R"(23_2-24_2_bc982da0-6162-4a10-8d8e-74ed24e0c775baa13801-b87d-49ee-9917-fdde917dc964)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    UNUSED(startTime);
    UNUSED(stopTime);
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    // robotCsvFile =
    //     std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"} +
    //     "2026-01-14_craw-20_cam-100.csv";
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_AU_20260209_vif_error(
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
    recordingIdStr = "AU_spikes";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\See Civil Trunk Main Ovality Final CCTV\Video\Sec)"};
    std::string recordingStem{
        R"(19_2-20_2_6e497d00-4fcf-44de-b8ed-a9e9fc02abd60481044a-afa8-472b-8e3b-a68b48ba0f1b)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    UNUSED(startTime);
    startTime = 248.0019989013672;
    UNUSED(stopTime);
    stopTime = 315.30999755859375;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    UNUSED(calibrationIntercept);
    UNUSED(robotCsvFile);
    robotCsvFile =
        std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"} + "AU_VIF_robot.csv";
    UNUSED(distancesCsvFilepath);
    distancesCsvFilepath =
        std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"} + "AU_VIF_px.csv";
    UNUSED(videoParametersFilepath);
    videoParametersFilepath =
        std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"} + "AU_VIF.json";
}

void setup_AU_20260209_SPR_13_crash_A(
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
    recordingIdStr = "AU_SPR_13_crash_A";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\See Civil Trunk Main Ovality Final CCTV\Video\Sec)"};
    std::string recordingStem{
        R"(13_2_11_2_17d2636a-7fcd-447e-88a1-9c3fec64889d4715fa94-a86f-4ff4-b79f-9f2a6d170118)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    startTime = 158.34;
    UNUSED(stopTime);
    stopTime = 2471.88;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    calibrationSlope = 1761.66880130768;
    UNUSED(calibrationIntercept);
    calibrationIntercept = 0.0111023373901844;
    UNUSED(robotCsvFile);
    robotCsvFile = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                 + "setup_AU_20260209_SPR_13_crash_A_robot.csv";
    UNUSED(distancesCsvFilepath);
    distancesCsvFilepath = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                         + "setup_AU_20260209_SPR_13_crash_A_dist_px.csv";
    UNUSED(videoParametersFilepath);
    videoParametersFilepath = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                            + "setup_AU_20260209_SPR_13_crash_A_video_params.json";
}

void setup_AU_20260209_SPR_13_crash_sec_6_2_to_5_2(
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
    recordingIdStr = "AU_SPR_13_crash_sec_6_2_to_5_2";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\See Civil Trunk Main Ovality Final CCTV\Video\Sec)"};
    std::string recordingStem{
        R"(6_2-5_2_b5ceb567-68f8-44f4-a115-8f3862427dc1d56ec20b-d88f-43cb-8b9a-96d59f07db44)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    startTime = 161.81;
    UNUSED(stopTime);
    stopTime = 2433.6;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    calibrationSlope = 1761.66880130768;
    UNUSED(calibrationIntercept);
    calibrationIntercept = 0.0111023373901844;
    UNUSED(robotCsvFile);
    // robotCsvFile =
    //     std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"} + "AU_VIF_robot.csv";
    UNUSED(distancesCsvFilepath);
    // distancesCsvFilepath = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
    //                      + "setup_AU_20260209_SPR_13_crash_A_dist_px.csv";
    UNUSED(videoParametersFilepath);
    // videoParametersFilepath = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
    //                         + "setup_AU_20260209_SPR_13_crash_A_video_params.json";
}

void setup_AU_20260209_SPR_13_crash_sec_2_2_to_ex_1_2(
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
    recordingIdStr = "AU_SPR_13_crash_sec_2_2_to_ex_1_2";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\See Civil Trunk Main Ovality Final CCTV\Video\Sec)"};
    std::string recordingStem{
        R"(2_2-EX.1_2_40337fb3-fd29-446a-9d70-63710db60e9dd2f2a34e-7afb-4659-8f8e-890b3fe8179c)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    UNUSED(startTime);
    startTime = 0.359;
    UNUSED(stopTime);
    stopTime = 2884.984;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    calibrationSlope = 1761.66880130768;
    UNUSED(calibrationIntercept);
    calibrationIntercept = 0.0111023373901844;
    UNUSED(robotCsvFile);
    // robotCsvFile =
    //     std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"} + "AU_VIF_robot.csv";
    UNUSED(distancesCsvFilepath);
    distancesCsvFilepath = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                         + "AU_SPR_13_crash_sec_2_2_to_ex_1_2_dist_px.csv";
    UNUSED(videoParametersFilepath);
    videoParametersFilepath = std::string{R"(D:\Development\Spirallo\_Spirallo_OUT\ToFix\)"}
                            + "AU_SPR_13_crash_sec_2_2_to_ex_1_2_video_params.json";
}

void setup_Albert_Calibration(
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
    recordingIdStr = "AU_spikes";

    std::filesystem::path rootDir{R"(D:\Projects\Spirallo\Videos\EXTRAS\Albert_Calibration)"};
    std::string recordingStem{
        R"(test1X_50d5f691-1af5-4399-bb50-736dec60cb87a2b4d862-e9c4-4b40-a2bc-d471f0589c73)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie H";

    UNUSED(startTime);
    startTime = 0.0;
    UNUSED(stopTime);
    stopTime = 21.0;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    calibrationSlope = 1695.83547115326;
    UNUSED(calibrationIntercept);
    calibrationIntercept = 0.014959957450628;
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    UNUSED(videoParametersFilepath);
}

void setup_Jacsonville(std::string& recordingIdStr,
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
    recordingIdStr = "Jacsonville";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\Jacsonville - Copy\Video\Sec)"};
    std::string recordingStem{
        R"(11_19_2024 10_16_24 AM_5ab2b280-a032-43b3-9849-0c9b4caed9f95aa1a499-c069-4868-9eb6-97813ec5871d)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    startTime = 0.2;
    stopTime = 607.2;
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

void setup_SPR23_Sec1(std::string& recordingIdStr,
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
    recordingIdStr = "SPR-23_Sec1";

    std::filesystem::path rootDir{
        R"(D:\Projects\Spirallo\Videos\EXTRAS\2026_03_05_wincanv2026.18.3.15_dn400_378_01\Video\Sec)"};
    std::string recordingStem{
        R"(05_03_2026 15_56_43_3984bdd0-a516-4285-a0d4-901e63ddebad0cb6b48c-789d-4a6f-9213-d939810b31d6)"};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX100 HD Serie V";

    startTime = 0.344;
    stopTime = 60.676;
    UNUSED(crossSectionsDistancesAlongPipe);
    UNUSED(imageProcessingConfigPath);
    UNUSED(cameraConfigPath);
    UNUSED(framesOutputDir);
    UNUSED(calibrationSlope);
    calibrationSlope = 1686.37561798096;
    UNUSED(calibrationIntercept);
    calibrationIntercept = 0.0137885641306639;
    UNUSED(robotCsvFile);
    UNUSED(distancesCsvFilepath);
    distancesCsvFilepath = std::string{R"(D:\Development\Spirallo\_ISSUES\SPR-23_2pl_discrepancy)"}
                         + R"(\)" + "SPR-23_Sec1_dist_px_ORG.csv";
    UNUSED(videoParametersFilepath);
    videoParametersFilepath =
        std::string{R"(D:\Development\Spirallo\_ISSUES\SPR-23_2pl_discrepancy)"} + R"(\)"
        + "SPR-23_Sec1_video_params.json";
}

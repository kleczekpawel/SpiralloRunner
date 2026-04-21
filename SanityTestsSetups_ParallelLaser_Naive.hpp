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

void setup_SanityTest_Naive__3520ad64548b(
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
    recordingIdStr = R"(Ipek RCX90_ac3d0b54-da66-4e2f-b762-3520ad64548b)";

    std::filesystem::path rootDir{R"(D:\Projects\Spirallo\Videos\SpiralloTestVideos)"};
    std::string recordingStem{recordingIdStr};
    videoPath = rootDir / (recordingStem + ".mp4");
    vifPath = rootDir / (recordingStem + ".txt");
    projectDistanceUnit = DistanceUnit::Meter;
    cameraName = "Ipek RCX90 new";

    startTime = 0.30;
    stopTime = 41.60;
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

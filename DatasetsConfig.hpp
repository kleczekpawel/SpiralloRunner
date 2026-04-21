#pragma once

#include "Datasets.hpp"
#include "FileIO/Path.hpp"

#include <set>
#include <unordered_map>

using namespace WinCan::Spirallo;
using namespace WinCan::Spirallo::Benchmark;

enum class RecordingCategory
{
    iPEK,
    Jim,
    Dobrzanski,
    Talha,
    Philipp,
    Extras,
};

Path getRootDir(const RecordingId recordingId);

const Path spiralloVideosRootDir{R"(D:\Projects\Spirallo\Videos)"};
extern std::unordered_map<RecordingCategory, Path> recordingsRootDirs;
extern std::unordered_map<RecordingCategory, std::set<RecordingId>> recordingsCategories;
extern std::unordered_map<RecordingId, Path> robotDataFiles;

extern std::unordered_map<RecordingId, Path> distancesPxDataFiles;
extern std::unordered_map<RecordingId, Path> videoParametersDataFiles;

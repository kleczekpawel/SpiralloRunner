#pragma once

#include "Datasets.hpp"

#include <filesystem>
#include <set>
#include <unordered_map>

using namespace WinCan::Spirallo;
using namespace WinCan::Spirallo::Benchmark;
namespace fs = std::filesystem;

enum class RecordingCategory
{
    iPEK,
    Jim,
    Dobrzanski,
    Talha,
    Philipp,
    Extras,
};

fs::path getRootDir(const RecordingId recordingId);

const fs::path spiralloVideosRootDir{"D:\\Projects\\Spirallo\\Videos"};
extern std::unordered_map<RecordingCategory, fs::path> recordingsRootDirs;
extern std::unordered_map<RecordingCategory, std::set<RecordingId>> recordingsCategories;
extern std::unordered_map<RecordingId, fs::path> robotDataFiles;

extern std::unordered_map<RecordingId, fs::path> distancesPxDataFiles;
extern std::unordered_map<RecordingId, fs::path> videoParametersDataFiles;

#include "DatasetsConfig.hpp"

#include <iostream>

fs::path getRootDir(const RecordingId recordingId) {
  for (auto const &[key, val] : recordingsCategories)
  // for (auto const& entry : recordingsCategories)
  {
    if (val.find(recordingId) != val.end()) {
      if (recordingsRootDirs.find(key) == recordingsRootDirs.end()) {
        if (key == RecordingCategory::Extras) {
          std::cout
              << "[WARN] 'Extra' recordingId not found in recordingsRootDirs."
              << std::endl;
        }

        throw std::runtime_error("recordingsRootDirs not containing the "
                                 "specified recording category!");
      }
      return recordingsRootDirs[key];
    }
  }

  if (recordingId == RecordingId::Extras1) {
    std::cout << "[WARN] 'Extra' recordingId not belonging to any category - "
                 "returning a dummy path."
              << std::endl;
    return std::filesystem::path{"DUMMY"};
  }

  throw std::runtime_error("RecordingId not belonging to any category!");
}

std::unordered_map<RecordingCategory, fs::path> recordingsRootDirs{
    {RecordingCategory::iPEK, spiralloVideosRootDir / "iPEK"},
    {RecordingCategory::Jim, spiralloVideosRootDir / "Jim"},
    {RecordingCategory::Dobrzanski,
     spiralloVideosRootDir / "Tomasz_Dobrzanski"},
    {RecordingCategory::Talha, spiralloVideosRootDir / "Talha"},
    {RecordingCategory::Philipp, spiralloVideosRootDir / "Philipp"},
};

std::unordered_map<RecordingCategory, std::set<RecordingId>>
    recordingsCategories{
        {RecordingCategory::iPEK,
         {RecordingId::iPEK1, RecordingId::iPEK2, RecordingId::iPEK2Short,
          RecordingId::iPEK3, RecordingId::iPEK4, RecordingId::iPEK5,
          RecordingId::iPEK6, RecordingId::iPEK7, RecordingId::iPEK8,
          RecordingId::iPEK9}},

        {RecordingCategory::Jim,
         {RecordingId::Jim1, RecordingId::Jim2, RecordingId::Jim3,
          RecordingId::Jim4, RecordingId::Jim5, RecordingId::Jim6,
          RecordingId::Jim7, RecordingId::Jim8, RecordingId::Jim9,
          RecordingId::Jim10, RecordingId::Jim11_18in_lab,
          RecordingId::Jim12_24in_lab, RecordingId::Jim13_32in_lab,
          RecordingId::Jim14_18in, RecordingId::Jim15_24in,
          RecordingId::Jim16_32in, RecordingId::Jim17_32in,
          RecordingId::Jim18_24in_2024_10_15,
          RecordingId::Jim19_32in_2024_10_17}},

        {RecordingCategory::Dobrzanski,
         {
             RecordingId::DobrzanskiMeters,
             RecordingId::DobrzanskiFeets,
             RecordingId::Dobrzanski3a,
             RecordingId::Dobrzanski3d,
         }},

        {RecordingCategory::Talha,
         {
             RecordingId::Talha1, RecordingId::Talha2, RecordingId::Talha3,
             RecordingId::Talha4, RecordingId::Talha5_DN400_Ref1,
             RecordingId::Talha6, RecordingId::Talha7_RCX100,
             RecordingId::Talha8_RCX100, RecordingId::Talha9_RCX100,
             RecordingId::Talha10_RCX100 /*, RecordingId::Talha11_RCX100*/
         }},

        {RecordingCategory::Philipp,
         {
             RecordingId::Philipp1,  RecordingId::Philipp2,
             RecordingId::Philipp3,  RecordingId::Philipp4,
             RecordingId::Philipp5,  RecordingId::Philipp6,
             RecordingId::Philipp7,  RecordingId::Philipp8,
             RecordingId::Philipp9,  RecordingId::Philipp10,
             RecordingId::Philipp11, RecordingId::Philipp12,
             RecordingId::Philipp13, RecordingId::Philipp14,
             RecordingId::Philipp15, RecordingId::Philipp16,
             RecordingId::Philipp17, RecordingId::Philipp18,
             RecordingId::Philipp19, RecordingId::Philipp20,
             RecordingId::Philipp21, RecordingId::Philipp22,
             RecordingId::Philipp23, RecordingId::Philipp24,
             RecordingId::Philipp25, RecordingId::Philipp26,
             RecordingId::Philipp27, RecordingId::Philipp28,
             RecordingId::Philipp29, RecordingId::Philipp30,
             RecordingId::Philipp31, RecordingId::Philipp32,
             RecordingId::Philipp33, RecordingId::Philipp34,
             RecordingId::Philipp35, RecordingId::Philipp36,
             RecordingId::Philipp37, RecordingId::Philipp38,
             RecordingId::Philipp39, RecordingId::Philipp40,
         }},

        // {RecordingCategory::Extras,
        //  {RecordingId::Extras1}
        // },
    };

const fs::path defaultOutputDir{"C:\\Development\\Spirallo\\_Spirallo_OUT"};
const std::string ARCHIVE_DIR{"Archive"};
std::unordered_map<RecordingId, fs::path> robotDataFiles{
    // {RecordingId::Jim11_18in_lab, defaultOutputDir / ARCHIVE_DIR /
    // "jim011_robot.csv"},
    {RecordingId::Jim11_18in_lab,
     defaultOutputDir / ARCHIVE_DIR / "jim011_robot_scaled.csv"},
    {RecordingId::Philipp35,
     defaultOutputDir / ARCHIVE_DIR / "philipp035_robot.csv"},
    // {RecordingId::Talha5_DN400_Ref1, defaultOutputDir /
    // "spirallo_output_20250109_112806_robot_1.csv"},
    {RecordingId::DobrzanskiMeters,
     defaultOutputDir / ARCHIVE_DIR / "tomasz_1_scaled.csv"},
    {RecordingId::Dobrzanski3a,
     defaultOutputDir / ARCHIVE_DIR / "dobrzanski003a_full.csv"},
    {RecordingId::Philipp39,
     defaultOutputDir / ARCHIVE_DIR / "philipp039_robot.csv"},
    {RecordingId::Philipp38,
     defaultOutputDir / ARCHIVE_DIR / "philipp38_robot.csv"},
    // {RecordingId::Philipp38, defaultOutputDir / ARCHIVE_DIR /
    // "dummy_T2V8.csv"},
    {RecordingId::Talha9_RCX100,
     defaultOutputDir / "ToFix" / "Talha9_RCX100_robot.csv"},
    {RecordingId::Talha10_RCX100,
     defaultOutputDir / "ToFix" / "Talha10_RCX100_robot.csv"},
};

std::unordered_map<RecordingId, fs::path> distancesPxDataFiles{
    {RecordingId::Talha9_RCX100,
     defaultOutputDir / "ToFix" / "Talha9_RCX100_dist_px.csv"},
};
std::unordered_map<RecordingId, fs::path> videoParametersDataFiles{
    {RecordingId::Talha9_RCX100,
     defaultOutputDir / "ToFix" / "Talha9_RCX100_video_params.json"},
};

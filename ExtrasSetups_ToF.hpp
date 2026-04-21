#pragma once

#include "FileIO/Path.hpp"
#include "Types.hpp"

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

inline Path tofDataDirRoot{R"(D:/Projects/Spirallo/RCX100_ToF)"};
inline Path genericDataDirRoot{R"(D:/Projects/Spirallo/_DUMMY_DATA)"};

void setup_philipp_1(std::vector<Path>& tofFiles,
                     OutliersHandlingStrategy& outsiderDataPointsHandlingStrategyForTof)
{
    Path rootDir{tofDataDirRoot / "Philipp"};

    tofFiles = {{
        rootDir / "rcx100h_dn250_spirello2_2025_08_11_1.ini",
        rootDir / "rcx100h_dn250_spirello2_2025_08_11_2.ini",
        rootDir / "rcx100h_dn315_spirello2-2025_08_11_2.ini",
        rootDir / "rcx100h_dn315_spirello2_2025_08_11_1.ini",
        rootDir / "rcx100h_dn315_spirello2_2025_08_11_3.ini",
        rootDir / "rcx100h_dn315_spirello2_2025_08_11_4.ini",
        rootDir / "rcx100v_dn250_spirello2_2025_08_11_1.ini",
        rootDir / "rcx100v_dn250_spirello2_2025_08_11_2.ini",
        rootDir / "rcx100v_dn250_spirello2_2025_08_11_3.ini",
        rootDir / "rcx100v_dn315_spirello2_2025_08_07_1.ini",
        rootDir / "rcx100v_dn315_spirello2_2025_08_07_2.ini",
        rootDir / "rcx100v_dn315_spirello2_2025_08_07_3.ini",
        rootDir / "rcx100v_dn315_spirello2_2025_08_07_4.ini",
    }};
    outsiderDataPointsHandlingStrategyForTof = OutliersHandlingStrategy::Keep;

    UNUSED(outsiderDataPointsHandlingStrategyForTof);
}

void setup_marcin_2025_08_13_TOF_Spirallo(
    std::vector<Path>& tofFiles, OutliersHandlingStrategy& outsiderDataPointsHandlingStrategyForTof)
{
    Path rootDir{tofDataDirRoot / "Marcin" / "2025_08_13_TOF_Spirallo"};
    std::vector<std::string> filenames{{
        "0cbc1fa9-c7f7-444d-a2f1-6867b368729c.ini",
        "55f51bcc-2e21-4492-b5ef-1512e60bef28.ini",
        "b09cc0bd-7689-45f3-beaf-ab722a76960a.ini",
        "b84f3eb3-d238-4d17-93d1-0005effbcec8.ini",
        "b9dfe001-19cb-4d24-9eb4-0e91dd55eec4.ini",
        "c2a8bfc5-2dbe-40ff-b83c-6fa73d339cd8.ini",
        "e19da010-593f-4b0c-9cf2-65f74ba725aa.ini",
        "ed3904be-ede7-4a23-9145-bb24e439a2a4.ini",
    }};
    tofFiles.clear();
    for (const auto& filename : filenames)
    {
        tofFiles.push_back(rootDir / filename);
    }

    outsiderDataPointsHandlingStrategyForTof = OutliersHandlingStrategy::Keep;

    UNUSED(outsiderDataPointsHandlingStrategyForTof);
}

void setup_rajeesh_manual_fix(std::vector<Path>& tofFiles,
                              OutliersHandlingStrategy& outsiderDataPointsHandlingStrategyForTof)
{
    Path rootDir{tofDataDirRoot / "Philipp"};
    tofFiles.clear();
    tofFiles.push_back(rootDir / "rcx100v_dn315_spirello2_2025_08_07_2_FIXED.ini");

    outsiderDataPointsHandlingStrategyForTof = OutliersHandlingStrategy::Keep;

    UNUSED(outsiderDataPointsHandlingStrategyForTof);
}

void setup_albert_generic_diamond(
    std::vector<Path>& tofFiles, OutliersHandlingStrategy& outsiderDataPointsHandlingStrategyForTof)
{
    Path rootDir{genericDataDirRoot / "Perfect_ToF_Albert"};
    tofFiles.clear();
    tofFiles.push_back(rootDir / "perfectToF_square.ini");

    outsiderDataPointsHandlingStrategyForTof = OutliersHandlingStrategy::Keep;

    UNUSED(outsiderDataPointsHandlingStrategyForTof);
}

void setup_pawel_generic_square(std::vector<Path>& tofFiles,
                                OutliersHandlingStrategy& outsiderDataPointsHandlingStrategyForTof)
{
    Path rootDir{genericDataDirRoot / "Perfect_ToF_Pawel"};
    tofFiles.clear();
    tofFiles.push_back(rootDir / "perfectToF_square.ini");

    outsiderDataPointsHandlingStrategyForTof = OutliersHandlingStrategy::Keep;

    UNUSED(outsiderDataPointsHandlingStrategyForTof);
}

void setup_tof_with_sensor_ids(std::vector<Path>& tofFiles,
                               OutliersHandlingStrategy& outsiderDataPointsHandlingStrategyForTof)
{
    Path rootDir{tofDataDirRoot / "Marcin" / "2025_11_19_TOF" / "Module" / "Spirallo"};
    tofFiles.clear();
    tofFiles.push_back(rootDir / "2025_11_19_13_10_04.ini");

    outsiderDataPointsHandlingStrategyForTof = OutliersHandlingStrategy::Keep;

    UNUSED(outsiderDataPointsHandlingStrategyForTof);
}

void setup_ToF_speed_100p(std::vector<Path>& tofFiles,
                          OutliersHandlingStrategy& outsiderDataPointsHandlingStrategyForTof)
{
    Path rootDir{tofDataDirRoot / "TOF_RCX100H_DN315_Speed100" / "Module" / "Laser" / "Spirallo"};
    tofFiles.clear();
    tofFiles.push_back(rootDir / "TOF_0001.ini");

    outsiderDataPointsHandlingStrategyForTof = OutliersHandlingStrategy::Keep;

    UNUSED(outsiderDataPointsHandlingStrategyForTof);
}

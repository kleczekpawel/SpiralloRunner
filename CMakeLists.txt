cmake_minimum_required(VERSION 3.21)

project(SpiralloRunner LANGUAGES CXX)

include(CMakePrintHelpers)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES DatasetsConfig.cpp main.cpp)

set(HEADERS DatasetsConfig.hpp ExtrasSetups_ParallelLaser.hpp ExtrasSetups_ToF.hpp
            SanityTestsSetups_ParallelLaser.hpp)

add_executable(SpiralloRunner ${HEADERS} ${SOURCES})

target_link_libraries(SpiralloRunner PUBLIC spiralloperf_static spirallolib_static)
target_include_directories(SpiralloRunner PUBLIC ${CMAKE_SOURCE_DIR}/src/spirallolib)

cmake_minimum_required(VERSION 3.8)
project(bp_algo)

set(CMAKE_CXX_STANDARD 17)

set(GTEST_INCLUDE_DIR /usr/include/gtest)
include_directories(${GTEST_INCLUDE_DIR})

set(EIGEN_ROOT /usr/include/eigen3)
include_directories(${EIGEN_ROOT})

set(SOURCE_FILES main.cpp bp.cpp)
add_executable(bp ${SOURCE_FILES})

add_executable(runRandomTests random_test.cpp random.cpp)
target_link_libraries(runRandomTests gtest gtest_main)

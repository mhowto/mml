cmake_minimum_required(VERSION 3.8)
project(bp_algo)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/include/eigen3)

set(SOURCE_FILES main.cpp bp.cpp)
add_executable(bp ${SOURCE_FILES})
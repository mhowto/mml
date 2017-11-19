cmake_minimum_required(VERSION 3.8)
project(eigen_tutorial)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/include/eigen3)


set(SOURCE_FILES main.cpp)
add_executable(tuto ${SOURCE_FILES})
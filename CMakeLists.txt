cmake_minimum_required(VERSION 3.6)
project(accelerated)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/0.cpp src/1.cpp src/run.cpp src/0.h src/1.h)
add_executable(accelerated ${SOURCE_FILES})
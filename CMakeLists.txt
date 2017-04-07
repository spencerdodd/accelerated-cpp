cmake_minimum_required(VERSION 3.6)
project(accelerated)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/chapter-0.cpp src/chapter-1.cpp src/run.cpp src/chapter-0.h src/chapter-1.h src/chapter-2.cpp src/chapter-2.h)
add_executable(accelerated ${SOURCE_FILES})
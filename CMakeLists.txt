cmake_minimum_required(VERSION 3.6)
project(accelerated)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/chapter0.cpp src/chapter1.cpp src/run.cpp src/chapter0.h src/chapter1.h src/chapter2.cpp src/chapter2.h src/chapter3.cpp src/chapter3.h)
add_executable(accelerated ${SOURCE_FILES})
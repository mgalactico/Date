cmake_minimum_required(VERSION 3.7)
project(Date)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_CXX_COMPILER "/usr/bin/g++-7")

set(SOURCE_FILES DateDemo.cpp Date.h Date.cpp)
add_executable(Date ${SOURCE_FILES})
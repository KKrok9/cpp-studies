cmake_minimum_required(VERSION 3.16)

project(simpleCalc)

set(CMAKE_CXX_STANDARD 20)

add_executable(main src/main.cpp src/calc.cpp include/calc.hpp)
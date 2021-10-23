cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

include_directories(matrixLib)

add_library(matrixLib STATIC matrixLib/matrix.cpp)
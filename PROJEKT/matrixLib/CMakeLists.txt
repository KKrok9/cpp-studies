cmake_minimum_required(VERSION 3.16)

include_directories(matrixLib)

project(matrixLib)

set(CMAKE_CXX_STANDARD 20)

add_library(matrixLib STATIC src/matrix.cpp)
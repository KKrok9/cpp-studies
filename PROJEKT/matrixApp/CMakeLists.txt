cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD )

project(matrixAPP)

add_executable(matrixApp main.cpp)

target_link_libraries(matrixApp matrixLib)

include_directories(../matrixLib)
cmake_minimum_required(VERSION 3.16)

project(LAB6)

set(CMAKE_CXX_STANDARD 20)

add_executable(main6 "VECTOR/src/main.cpp" "VECTOR/src/Vector.cpp" "VECTOR/include/Vector.h")
add_executable(friendly "FRIENDLY_FUNCTIONS/src/main.cpp" "FRIENDLY_FUNCTIONS/src/Node.cpp" "FRIENDLY_FUNCTIONS/include/Node.h")



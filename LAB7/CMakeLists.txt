cmake_minimum_required(VERSION 3.16)

project(LAB7)

set(CMAKE_CXX_STANDARD 20)

add_executable(main7 "DZIEDZICZENIE/main.cpp" )
add_executable(main7.1 "POLIMORFIZM/src/main.cpp" "POLIMORFIZM/src/Circle.cpp" "POLIMORFIZM/src/Rectangle.cpp" "POLIMORFIZM/include/Circle.h" "POLIMORFIZM/include/Rectangle.h" "POLIMORFIZM/include/Figure.h")
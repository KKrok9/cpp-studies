cmake_minimum_required(VERSION 3.16)

project(PROJEKT2)

set(CMAKE_CXX_STANDARD 20)

add_executable(PROJEKT2
                src/main.cpp
                src/App.cpp         include/App.h
                src/Components.cpp  include/Components.h
                "src/Titles.cpp"      "include/Titles.h"
                src/Methods.cpp     include/Methods.h
                src/Times.cpp       include/Times.h
                src/Calories.cpp    include/Calories.h

        )


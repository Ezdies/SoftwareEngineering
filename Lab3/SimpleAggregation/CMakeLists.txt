cmake_minimum_required(VERSION 3.22)
project(Simple_Aggregation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Simple_Aggregation
        main.cpp
        TPupil.cpp
        TPupil.h
        TSchool.cpp
        TSchool.h)

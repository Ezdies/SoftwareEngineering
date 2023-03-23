cmake_minimum_required(VERSION 3.22)
project(Complete_Aggregation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Complete_Aggregation
        main.cpp
        THeart.cpp
        THeart.h
        THuman.cpp
        THuman.h)

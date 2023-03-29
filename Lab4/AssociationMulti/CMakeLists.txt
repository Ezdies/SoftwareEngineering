cmake_minimum_required(VERSION 3.22)
project(Association_multi)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Association_multi
        main.cpp
        THouse.cpp
        THouse.h
        TOwner.cpp
        TOwner.h)

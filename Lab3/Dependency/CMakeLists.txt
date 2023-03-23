cmake_minimum_required(VERSION 3.22)
project(Dependency)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Dependency
        ClassA.cpp
        ClassA.h
        ClassB.cpp
        ClassB.h
        main.cpp)

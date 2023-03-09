cmake_minimum_required(VERSION 3.22)
project(Lab2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab2
        Jamnik.cpp
        Jamnik.h
        Pies.cpp
        Pies.h
        Ssak.cpp
        Ssak.h
        main.cpp)

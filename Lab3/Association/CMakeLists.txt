cmake_minimum_required(VERSION 3.22)
project(Association)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Association
        main.cpp
        TBook.cpp
        TBook.h
        TReader.cpp
        TReader.h)

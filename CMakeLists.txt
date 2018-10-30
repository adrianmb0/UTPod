cmake_minimum_required(VERSION 3.12)
project(UTPod)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(UTPod
        Song.cpp
        Song.h
        UtPod.cpp
        UtPod.h
        utPod_driver.cpp)

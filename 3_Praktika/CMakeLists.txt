cmake_minimum_required(VERSION 3.26)
project(3_Praktika C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(3_Praktika
        func.c
        header.h
        main.c)

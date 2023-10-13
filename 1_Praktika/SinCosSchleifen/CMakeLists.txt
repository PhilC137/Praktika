cmake_minimum_required(VERSION 3.26)
project(SinCosSchleifen C)

set(CMAKE_C_STANDARD 23)

add_executable(SinCosSchleifen main.c
        ../Kalender/Kalender.c)

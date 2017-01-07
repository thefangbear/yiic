cmake_minimum_required(VERSION 3.5)
project(yiic)

set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -std=c11")

set(SOURCE_FILES main.c)
add_executable(yiic ${SOURCE_FILES})
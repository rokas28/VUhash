cmake_minimum_required(VERSION 3.13)
project(VUhash)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../build")

add_executable(VUhash main.cpp hash.cpp hash.h main.h)
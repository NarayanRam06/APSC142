cmake_minimum_required(VERSION 3.26)
project(sandbox C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

add_executable(tests apsc142assign2.cpp ceab.c)

cmake_minimum_required(VERSION 3.29)
project(half_cut)

set(CMAKE_CXX_STANDARD 20)

add_executable(half_cut main.cpp
        halfDivisionSearch.h
        halfDivisionSearch.cpp)

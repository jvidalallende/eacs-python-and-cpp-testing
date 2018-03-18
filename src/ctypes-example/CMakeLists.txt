cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror -g -O0")
project(Complex VERSION 0.1 DESCRIPTION "C++ library for complex numbers")

add_compile_options("-O0")
add_library(Complex SHARED Complex.cpp)

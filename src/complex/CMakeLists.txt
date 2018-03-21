cmake_minimum_required(VERSION 3.0)

project(complex)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Werror")

add_library(${PROJECT_NAME} STATIC Complex.cpp)

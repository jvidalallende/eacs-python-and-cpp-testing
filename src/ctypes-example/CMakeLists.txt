cmake_minimum_required(VERSION 3.0)
project(complex-ctypes)

include_directories(../complex)
link_directories(../complex)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Werror")

add_library(${PROJECT_NAME} SHARED Complex_wrapper.cpp)
target_link_libraries(${PROJECT_NAME} complex)

cmake_minimum_required(VERSION 3.0)
project(complex VERSION 0.1 DESCRIPTION "C++ library for complex numbers")

find_package(PythonLibs REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror -g -O0")
set(PYBIND11_INCLUDE_DIR "pybind11/include")

include_directories(${PYTHON_INCLUDE_DIR} ${PYBIND11_INCLUDE_DIR})

add_library(complex SHARED Complex.cpp)
target_link_libraries(complex ${PYTHON_LIBRARIES})
set_target_properties(complex PROPERTIES SUFFIX .so)
set_target_properties(complex PROPERTIES PREFIX "")

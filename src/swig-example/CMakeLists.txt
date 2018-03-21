cmake_minimum_required(VERSION 3.0)
project(complex-swig CXX)

find_package(PythonLibs REQUIRED)
find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${PYTHON_INCLUDE_DIR})

add_library(complex-swig SHARED Complex.cpp)
#target_link_libraries(complex-swig ${PYTHON_LIBRARIES})

set_property(SOURCE Complex.i PROPERTY CPLUSPLUS ON)
swig_add_module(complex python Complex.i Complex.cpp)
swig_link_libraries(complex complex-swig)

#set_target_properties(complex PROPERTIES SUFFIX .so)
#set_target_properties(complex PROPERTIES PREFIX "")

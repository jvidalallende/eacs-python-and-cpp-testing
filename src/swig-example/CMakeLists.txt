cmake_minimum_required(VERSION 3.0)
project(complex_swig CXX)

find_package(PythonLibs REQUIRED)
find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Werror")
include_directories(${PYTHON_INCLUDE_DIR} ../complex)
link_directories(../complex)

set_property(SOURCE Complex.i PROPERTY CPLUSPLUS ON)
swig_add_module(${PROJECT_NAME} python Complex.i)
swig_link_libraries(${PROJECT_NAME} complex)

configure_file(test_complex.py test_complex.py COPYONLY)

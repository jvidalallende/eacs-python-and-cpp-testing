cmake_minimum_required(VERSION 3.0)
project(complex_pybind11)

find_package(PythonLibs REQUIRED)

set(PYBIND11_INCLUDE_DIR "pybind11/include")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Werror")

include_directories(../complex ${PYTHON_INCLUDE_DIR} ${PYBIND11_INCLUDE_DIR})
link_directories(../complex)

add_library(${PROJECT_NAME} SHARED Complex_pybind11.cpp)
target_link_libraries(${PROJECT_NAME} complex ${Boost_LIBRARIES})
set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX .so)
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")

configure_file(test_complex.py test_complex.py COPYONLY)

cmake_minimum_required(VERSION 3.0)
include(ExternalProject)

project(complex_pybind11)

find_package(PythonLibs REQUIRED)

ExternalProject_Add(
    pybind11
    PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/deps
    GIT_REPOSITORY https://github.com/pybind/pybind11.git
    GIT_TAG v2.2.2
    TIMEOUT 10
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
    LOG_DOWNLOAD ON
)


set(PYBIND11_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/deps/src/pybind11/include")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC -Wall -Werror")

include_directories(../complex ${PYTHON_INCLUDE_DIR} ${PYBIND11_INCLUDE_DIR})
link_directories(../complex)

add_library(${PROJECT_NAME} SHARED Complex_pybind11.cpp)
add_dependencies(${PROJECT_NAME} pybind11)
target_link_libraries(${PROJECT_NAME} complex ${Boost_LIBRARIES})
set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX .so)
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")

configure_file(test_complex.py test_complex.py COPYONLY)

cmake_minimum_required(VERSION 3.0)
project(complex_boost)

find_package(Boost REQUIRED COMPONENTS python)
find_package(PythonLibs REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Werror")

include_directories(${PYTHON_INCLUDE_DIR} ../complex)
link_directories(../complex)

add_library(${PROJECT_NAME} SHARED Complex_boost.cpp)
target_link_libraries(${PROJECT_NAME} complex ${Boost_LIBRARIES})
set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX .so)
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")

configure_file(test_complex.py test_complex.py COPYONLY)

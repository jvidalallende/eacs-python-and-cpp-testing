cmake_minimum_required(VERSION 3.0)
project(complex)

find_package(Boost REQUIRED COMPONENTS python)
find_package(PythonLibs REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${PYTHON_INCLUDE_DIR})

add_library(complex SHARED Complex.cpp)
target_link_libraries(complex ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})
set_target_properties(complex PROPERTIES SUFFIX .so)
set_target_properties(complex PROPERTIES PREFIX "")

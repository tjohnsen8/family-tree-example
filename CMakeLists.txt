cmake_minimum_required(VERSION 2.6)
project(famtree)

set(CMAKE_CXX_FLAGS "-g -Wall")
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

file(GLOB SOURCES "src/*.cpp")

# The following folder will be included
include_directories("${CMAKE_SOURCE_DIR}/include")

add_executable(famtree ${SOURCES})
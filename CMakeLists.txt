cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
set(PROJECT_NAME DildoWing)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(dep)
add_subdirectory(src)
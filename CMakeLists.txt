cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(PROJECT_NAME DildoWing)

project(${PROJECT_NAME})

add_subdirectory(dep)
add_subdirectory(src)
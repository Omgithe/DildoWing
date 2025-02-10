cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

set(PROJECT_NAME DildoWing)

project(${PROJECT_NAME})

add_subdirectory(dep)

target_link_libraries(${PROJECT_NAME} glfw)
cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

set(PROJECT_NAME DildoWing)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(dep)
target_link_libraries(${PROJECT_NAME} glfw)
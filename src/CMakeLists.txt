set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(PRIVATE_SOURCES main.cpp)

list(APPEND PRIVATE_SOURCES ${sources_windows})

add_executable(client ${PRIVATE_SOURCES})

target_link_libraries(client glfw)
target_link_libraries(client glad)

set_target_properties(client PROPERTIES FOLDER "client")
#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CLIENT_SOURCES Client.cpp GameInstance.cpp)

list(APPEND CLIENT_SOURCES ${sources_windows})

add_executable(client ${CLIENT_SOURCES})

target_link_libraries(client asio)
target_link_libraries(client glfw)
target_link_libraries(client glad)

set_target_properties(client PROPERTIES FOLDER "client")
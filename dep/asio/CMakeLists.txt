cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(asio)

add_library(asio STATIC include/asio.hpp src/asio.cpp) # src/asio_ssl.cpp)

target_compile_definitions(asio PRIVATE ASIO_STANDALONE)
target_compile_definitions(asio PRIVATE ASIO_HAS_THREADS)
target_compile_definitions(asio PRIVATE ASIO_SEPARATE_COMPILATION)
target_compile_definitions(asio PRIVATE ASIO_HAS_STD_ADDRESSOF)
target_compile_definitions(asio PRIVATE ASIO_HAS_STD_ARRAY)
target_compile_definitions(asio PRIVATE ASIO_HAS_CSTDINT)
target_compile_definitions(asio PRIVATE ASIO_HAS_STD_SHARED_PTR)
target_compile_definitions(asio PRIVATE ASIO_HAS_STD_TYPE_TRAITS)
target_compile_definitions(asio PRIVATE ASIO_HAS_VARIADIC_TEMPLATES)
target_compile_definitions(asio PRIVATE ASIO_HAS_STD_FUNCTION)
target_compile_definitions(asio PRIVATE ASIO_HAS_STD_CHRONO)
target_compile_definitions(asio PRIVATE BOOST_ALL_NO_LIB)

if(WIN32)
  target_compile_definitions(asio PRIVATE _WIN32_WINDOWS)
  target_link_libraries(asio ws2_32)
endif()

target_include_directories(asio PUBLIC include/)
set_target_properties(asio PROPERTIES FOLDER "asio")

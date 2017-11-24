cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)

add_executable(pack pack.cpp)
add_executable(unpack unpack.cpp)

target_link_libraries(pack ${CMAKE_SOURCE_DIR}/libyaml-cpp.a)
target_link_libraries(unpack ${CMAKE_SOURCE_DIR}/libyaml-cpp.a)

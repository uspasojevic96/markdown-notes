cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 14)
add_executable(mdnotes src/main.cpp)

add_subdirectory(external/CPPurses)
target_link_libraries(mdnotes cppurses)

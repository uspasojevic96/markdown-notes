project(mdnotes)
cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 14)
add_executable(
  mdnotes
  src/main.cpp
  src/editor/editor.cpp
  src/editor/widgets/save_area/save_area.cpp
  src/editor/widgets/text_area/text_area.cpp
)

add_subdirectory(external/CPPurses)
target_link_libraries(mdnotes cppurses)

cmake_minimum_required(VERSION 3.14)
project(csvparser)

include_directories(src/parser/includes)
add_subdirectory(src/frontline)
add_subdirectory(src/parser)

set(CMAKE_CXX_STANDARD 14)


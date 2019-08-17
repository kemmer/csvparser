cmake_minimum_required(VERSION 3.14)
project(csvparser)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_subdirectory(src/loader)
add_subdirectory(src/parser)
add_subdirectory(src/frontline)

add_subdirectory(test)

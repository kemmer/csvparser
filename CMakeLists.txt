cmake_minimum_required(VERSION 3.29)
project(csvparser)

include(CMakePrintHelpers)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W -Wall -Werror -pedantic")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(src/loader)
add_subdirectory(src/parser)
add_subdirectory(src/frontline)

add_subdirectory(test)

cmake_print_variables(CMAKE_BINARY_DIR)

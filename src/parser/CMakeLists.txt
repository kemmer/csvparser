set(PARSER_SOURCES Parser.cpp)

add_library(parser STATIC ${PARSER_SOURCES})
target_include_directories(parser PUBLIC includes)

set(PARSER_PATH ${PROJECT_SOURCE_DIR}/src/parser PARENT_SCOPE)

set(PARSER_SOURCES parser.cpp)

add_library(parser STATIC ${PARSER_SOURCES})
target_include_directories(parser PUBLIC includes)

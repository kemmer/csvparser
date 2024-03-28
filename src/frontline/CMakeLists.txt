set(FRONTLINE_SOURCES main.cpp)

add_executable(frontline ${FRONTLINE_SOURCES})
target_include_directories(frontline PRIVATE includes)

# Linking libraries
# Headers
target_include_directories(frontline PUBLIC ${LOADER_PATH}/includes)
target_include_directories(frontline PUBLIC ${PARSER_PATH}/includes)

# Static libs
target_link_libraries(frontline loader parser)

cmake_print_variables(FRONTLINE_SOURCES)

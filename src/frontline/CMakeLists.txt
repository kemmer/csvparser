set(FRONTLINE_SOURCES main.cpp)

add_executable(frontline ${FRONTLINE_SOURCES})
target_include_directories(frontline PRIVATE includes)

# Linking libraries
# Headers
target_include_directories(frontline PUBLIC ${LOADER_PATH}/includes)
target_include_directories(frontline PUBLIC ${PARSER_PATH}/includes)

# Static libs
find_library(FRONTLINE_LIBS loader ${PROJECT_SOURCE_DIR}/lib)
find_library(FRONTLINE_LIBS parser ${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(frontline LINK_PUBLIC ${FRONTLINE_LIBS})

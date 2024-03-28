set(LOADER_PATH ${PROJECT_SOURCE_DIR}/src/loader PARENT_SCOPE)

set(LOADER_SOURCES reader.cpp)

add_library(loader STATIC ${LOADER_SOURCES})
target_include_directories(loader PUBLIC includes)

set(LOADER_SOURCES loader.cpp)

add_library(loader STATIC ${LOADER_SOURCES})
target_include_directories(loader PUBLIC includes)

set(FRONTLINE_SOURCES main.cpp)

add_executable(frontline ${FRONTLINE_SOURCES})
target_include_directories(frontline PRIVATE includes)

# Linking static libraries
find_library(LIBPARSER parser lib)
target_link_libraries(frontline LINK_PUBLIC ${LIBPARSER})

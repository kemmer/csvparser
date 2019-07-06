set(Boost_USE_STATIC_LIBS OFF)

# see https://cmake.org/cmake/help/latest/module/FindBoost.html
find_package(Boost REQUIRED COMPONENTS unit_test_framework)

add_executable(csvparser_test tests.cpp)
target_link_libraries(csvparser_test ${Boost_LIBRARIES})

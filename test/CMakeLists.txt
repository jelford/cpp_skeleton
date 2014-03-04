set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDE_DIR})

find_package(Boost 1.54 REQUIRED unit_test_framework)

link_libraries(
	${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)

# Add new testing modules here (don't forget to link them below)
add_subdirectory(module_1)
add_subdirectory(module_2)

add_executable(test test_main.cpp)

# Link new testing modules here
target_link_libraries(
    test
    module_1_tests
    module_2_tests
)





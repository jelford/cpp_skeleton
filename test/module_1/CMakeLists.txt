include_directories(include)

find_package(Boost 1.54 REQUIRED unit_test_framework)

# It's important that the library is shared; otherwise it will be optimised away, since nothing references it.
add_library(module_1_tests SHARED module_1_tests.cpp)

target_link_libraries(
    module_1_tests
	${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
    module_1
)

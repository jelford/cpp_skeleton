include_directories(include)

find_package(Boost 1.54 REQUIRED unit_test_framework)

link_libraries(
	${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)

# It's important that the library is shared; otherwise it will be optimised away, since nothing references it.
add_library(module_2_tests SHARED module_2_tests.cpp)

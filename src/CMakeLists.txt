set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDE_DIR})

find_package(Boost 1.54 REQUIRED system)

add_subdirectory(module_1)

add_executable(the_program main.cpp)
target_link_libraries(
    the_program
	${Boost_SYSTEM_LIBRARY}
    module_1_static
	)

cmake_minimum_required (VERSION 2.8)
project (life)

set(CMAKE_CXX_FLAGS "--std=c++11 -Wall -Werror -pedantic -g" ${CMAKE_CXX_FLAGS})

add_subdirectory(src)
add_subdirectory(test)


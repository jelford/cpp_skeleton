set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDE_DIR})

add_library(module_1_static module_1.cpp)
add_library(module_1 SHARED module_1.cpp)

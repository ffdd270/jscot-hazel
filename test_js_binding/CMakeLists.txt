#NEED VCPKG

cmake_minimum_required(VERSION 3.1)
project(test_js_binding)

set(CMAKE_CXX_STANDARD 17)
set( SRC_FILE
		main.cpp)

find_package(Duktape CONFIG REQUIRED)
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${DUKTAPE_INCLUDE_DIRS})
add_executable(test_js_binding ${SRC_FILE})
target_link_libraries(test_js_binding  ${DUKTAPE_LIBRARY})
cmake_minimum_required(VERSION 3.17)
project(hazel)

set(CMAKE_CXX_STANDARD 17)

set( SRC_FILE
		src/main.cpp)

find_package(Duktape CONFIG REQUIRED)
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${DUKTAPE_INCLUDE_DIRS})
add_executable(hazel ${SRC_FILE})
target_link_libraries(hazel  ${DUKTAPE_LIBRARY})

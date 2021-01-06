cmake_minimum_required(VERSION 3.17)
project(quick_js_binding)

set(CMAKE_CXX_STANDARD 14)

include_directories( include )

find_library(quickjs
		NAMES quickjs.lib
		PATHS lib/x64
		REQUIRE)

add_executable(quick_js_binding main.cpp)
target_link_libraries( quick_js_binding ${quickjs} )
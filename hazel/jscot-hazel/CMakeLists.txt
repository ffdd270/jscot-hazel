cmake_minimum_required(VERSION 3.17)
project(jscot_hazel)

set(CMAKE_CXX_STANDARD 17)

set( SRC_FILE
		include/bind_js.h include/bind_param.h include/bind_return.h src/jscot_hazel.cpp src/bind_imgui_duktape.h src/bind_imgui_duktape.cpp src/bind_imgui_generate.cpp src/bind_imgui_generate.h include/imgui_typedef.h)

set( IMGUI_FILES
		external/imgui/imgui.cpp
		external/imgui/imgui_demo.cpp
		external/imgui/imgui_draw.cpp
		external/imgui/imgui_widgets.cpp
		)

find_package(OpenGL REQUIRED)
find_package(Duktape CONFIG REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${DUKTAPE_INCLUDE_DIRS} include/imgui include/)
add_library(jscot_hazel ${SRC_FILE} ${IMGUI_FILES})
target_link_libraries(jscot_hazel ${DUKTAPE_LIBRARY} OpenGL32)

cmake_minimum_required(VERSION 3.17)
project(jscot_hazel_demo)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2 COMPONENTS graphics REQUIRED)
find_package(OpenGL REQUIRED)
find_package(Duktape CONFIG REQUIRED)

set( PROJECT_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR} )
set( JSCOT_HAZEL_NAME jscot_hazel.lib )

find_library(JSCOT_HAZEL_LIB
		NAMES ${JSCOT_HAZEL_NAME}
		HINTS ${PROJECT_ROOT_PATH}/../cmake-build-debug/jscot-hazel )

include_directories(
		${PROJECT_ROOT_PATH}/external/imgui-sfml/
		${PROJECT_ROOT_PATH}/../jscot-hazel/include/
		${PROJECT_ROOT_PATH}/../jscot-hazel/include/imgui
)

set( SRC_FILE src/main.cpp )

set(IMGUI_SFML
		${PROJECT_ROOT_PATH}/external/imgui-sfml/imconfig-SFML.h
		${PROJECT_ROOT_PATH}/external/imgui-sfml/imgui-SFML.cpp
		${PROJECT_ROOT_PATH}/external/imgui-sfml/imgui-SFML.h
		${PROJECT_ROOT_PATH}/external/imgui-sfml/imgui-SFML_export.h)


add_executable( jscot_hazel_demo ${SRC_FILE} ${IMGUI_SFML} )
target_link_libraries( jscot_hazel_demo PRIVATE sfml-graphics OpenGL32 ${JSCOT_HAZEL_LIB}  ${DUKTAPE_LIBRARY})
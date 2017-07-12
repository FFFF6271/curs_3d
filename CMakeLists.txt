cmake_minimum_required(VERSION 3.6)
project(oop1)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_definitions(${GTK3_CFLAGS_OTHER})

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp draw_scene.cpp draw_scene.h model.h point.h parse_model.cpp parse_model.h util.cpp util.h)
add_executable(oop1 ${SOURCE_FILES})

target_link_libraries(oop1 ${GTK3_LIBRARIES})
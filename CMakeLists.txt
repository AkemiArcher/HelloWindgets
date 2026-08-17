cmake_minimum_required(VERSION 4.3)
project(HelloWindgets)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 REQUIRED COMPONENTS Widgets)
file(GLOB_RECURSE IMG RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} CONFIGURE_DEPENDS "img/*")
add_executable(HelloWindgets
        main.cpp
        mainwindow.h
        mainwindow.cpp
        ${IMG}
)
target_link_libraries(HelloWindgets
        Qt6::Widgets
)


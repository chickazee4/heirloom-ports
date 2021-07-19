cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)

project(hm4)

set(
    M4_SRC
    m4.c
    m4.h
    m4ext.c
    m4macs.c
    m4y.y
    version.c
)

add_executable(hm4 ${M4_SRC})

install(
    TARGETS hm4
)

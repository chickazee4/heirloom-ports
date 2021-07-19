cmake_minimum_required(VERSION 3.1)
# 3.1 is required for target_sources() command which is used to grab the large number of source files for the main application
set(CMAKE_CXX_STANDARD 17)

project(hyacc)

set(
    LIBY_SRC
    libmai.c
    libzer.c
)
set(
    YACC_SRC
    dextern
    getopt.c
    sgs.h
    y1.c
    y2.c
    y3.c
    y4.c
    y5.c
    yaccpar
)

add_library( liby STATIC ${LIBY_SRC} )
add_executable( hyacc ${YACC_SRC} )

target_link_libraries(oyacc liby)

install(
    TARGETS hyacc
)

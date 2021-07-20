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

target_link_libraries(hyacc liby)

install(
    TARGETS hyacc
)

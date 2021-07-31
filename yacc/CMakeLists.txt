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
)

add_library(y STATIC ${LIBY_SRC})
add_executable(yacc ${YACC_SRC})

target_link_libraries(yacc y)

if(ENABLE_HNAMES)
    set_target_properties(yacc PROPERTIES PREFIX "h")
endif()
install(TARGETS yacc)
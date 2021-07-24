set(
    LIBL_SRC
    allprint.c
    libmain.c
    reject.c
    yyless.c
    yywrap.c
)

set(
    LEX_SRC
    main.c
    sub1.c
    sub2.c
    sub3.c
    header.c
    wcio.c
    parser.y
    getopt.c
    lsearch.c
)

include_directories(include)

add_library(l STATIC ${LIBL_SRC})
add_executable(hlex ${LEX_SRC})

target_link_libraries(hlex l)

install(
    TARGETS hlex
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/lex
)

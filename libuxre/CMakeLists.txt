set(
    LIBUXRE_SRC
    #_collelem.c
    #_collmult.c
    #bracket.c
    onefile.c
    #regcomp.c
    #regdfa.c
    regerror.c
    #regexec.c
    regfree.c
    #regnfa.c
    #regparse.c
    #stubs.c
)
add_library(uxre SHARED ${LIBUXRE_SRC})
target_include_directories(uxre PUBLIC include)
install(
    TARGETS uxre
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libuxre
)

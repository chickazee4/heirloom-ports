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
add_library(uxre STATIC ${LIBUXRE_SRC})
target_include_directories(uxre PUBLIC include)
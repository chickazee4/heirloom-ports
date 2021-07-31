set(
    LIBTERM_SRC
    libterm/termcap.c
    libterm/tgoto.c
    libterm/tputs.c
)

set(
    EX_SRC
    src/ex.c
    src/ex_addr.c
    src/ex_cmds.c
    src/ex_cmds2.c
    src/ex_cmdsub.c
    src/ex_data.c
    src/ex_extern.c
    src/ex_get.c
    src/ex_io.c
    src/ex_put.c
    src/ex_re.c
    src/ex_set.c
    src/ex_subr.c
    src/ex_tagio.c
    src/ex_temp.c
    src/ex_tty.c
    src/ex_unix.c
    src/ex_v.c
    src/ex_vadj.c
    src/ex_vget.c
    src/ex_vmain.c
    src/ex_voper.c
    src/ex_vops.c
    src/ex_vops2.c
    src/ex_vops3.c
    src/ex_vput.c
    src/ex_vwind.c
    src/printf.c
    src/ex_version.c
    src/malloc.c
)

set(
    EXRECOVER_SRC
    src/exrecover.c
    src/malloc.c
    src/compat.c
)

set(
    EXPRESERVE_SRC
    src/expreserve.c
    src/compat.c
)

add_library(termlib ${LIBTERM_SRC})
target_include_directories(termlib PRIVATE include/libterm)

add_executable(ex ${EX_SRC})
target_link_libraries(ex uxre termlib)
target_include_directories(ex PUBLIC include)
target_compile_definitions(ex PRIVATE -DUXRE)

add_executable(exrecover ${EXRECOVER_SRC})
target_include_directories(exrecover PUBLIC include)
target_link_libraries(exrecover uxre termlib)
target_compile_definitions(exrecover PRIVATE -DPRESERVEDIR="${USRSHAREDIR}/preserve")

add_executable(expreserve ${EXPRESERVE_SRC})
target_include_directories(expreserve PUBLIC include)
target_link_libraries(expreserve uxre termlib)
target_compile_definitions(expreserve PRIVATE -DPRESERVEDIR="${USRSHAREDIR}/preserve")

configure_file(src/wvi.sh wvi @ONLY)

if(ENABLE_HNAMES) 
    set_target_properties(ex PROPERTIES PREFIX "h")
    set_target_properties(exrecover PROPERTIES PREFIX "h")
    set_target_properties(expreserve PROPERTIES PREFIX "h")
    install(
        TARGETS ex exrecover expreserve
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/hex
    )
    install(
        FILES ${CMAKE_BINARY_DIR}/ex/wvi RENAME hwvi DESTINATION ${CMAKE_INSTALL_BINDIR}/
    )
    install(
        CODE "execute_process( \
        COMMAND ${CMAKE_COMMAND} -E create_symlink \
        ${CMAKE_INSTALL_BINDIR}/hex \
        ${CMAKE_INSTALL_BINDIR}/hvi \
        )"
    )
else()
    install(
        TARGETS ex exrecover expreserve
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/hex
    )
    install(
        FILES ${CMAKE_BINARY_DIR}/ex/wvi DESTINATION ${CMAKE_INSTALL_BINDIR}/
    )
    install(
        CODE "execute_process( \
        COMMAND ${CMAKE_COMMAND} -E create_symlink \
        ${CMAKE_INSTALL_BINDIR}/ex \
        ${CMAKE_INSTALL_BINDIR}/vi \
        )"
    )
endif()

add_custom_command(
    OUTPUT bc.c
    COMMAND yacc ${CMAKE_SOURCE_DIR}/bc/bc.y && sed -f ${CMAKE_SOURCE_DIR}/bc/yyval.sed "y.tab.c" > bc.c
    DEPENDS bc.y yacc yyval.sed
    VERBATIM
)

add_executable(bc bc.c)
target_link_libraries(bc heirloom)

if(ENABLE_HNAMES)
    target_compile_definitions(bc PUBLIC -DLIBB="${CMAKE_INSTALL_LIBDIR}/hbc/lib.b" -DDC="${CMAKE_INSTALL_BINDIR}/hdc")
    set_target_properties(bc PROPERTIES PREFIX h)
    install(
        FILES ${CMAKE_SOURCE_DIR}/bc/lib.b
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/hbc
    )
else()
    target_compile_definitions(bc PUBLIC -DLIBB="${CMAKE_INSTALL_LIBDIR}/bc/lib.b" -DDC="${CMAKE_INSTALL_BINDIR}/dc")
    install(
        FILES ${CMAKE_SOURCE_DIR}/bc/lib.b
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/bc
    )
endif()

install(TARGETS bc)
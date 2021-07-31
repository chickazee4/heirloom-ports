add_executable(cp cp.c)
target_link_libraries(cp heirloom)

if(ENABLE_HNAMES)
    target_compile_definitions(cp PUBLIC HNAMES)
    set_target_properties(cp PROPERTIES PREFIX "h")
    install(
        TARGETS cp
    )
    install(CODE "execute_process( \
        COMMAND ${CMAKE_COMMAND} -E create_symlink \
        ${CMAKE_INSTALL_BINDIR}/hcp \
        ${CMAKE_INSTALL_BINDIR}/hmv \
        )"
    )
    install(CODE "execute_process( \
        COMMAND ${CMAKE_COMMAND} -E create_symlink \
        ${CMAKE_INSTALL_BINDIR}/hcp \
        ${CMAKE_INSTALL_BINDIR}/hln \
        )"
    )
else()
    install(
        TARGETS cp
    )
    install(CODE "execute_process( \
        COMMAND ${CMAKE_COMMAND} -E create_symlink \
        ${CMAKE_INSTALL_BINDIR}/cp \
        ${CMAKE_INSTALL_BINDIR}/mv \
        )"
    )
    install(CODE "execute_process( \
        COMMAND ${CMAKE_COMMAND} -E create_symlink \
        ${CMAKE_INSTALL_BINDIR}/cp \
        ${CMAKE_INSTALL_BINDIR}/ln \
        )"
    )
endif()
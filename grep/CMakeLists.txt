if(ENABLE_ILLUMOS)
    add_executable(grep illumosgrep.c)
    if(ENABLE_HNAMES)
        set_target_properties(grep PROPERTIES PREFIX "h")
        install(TARGETS grep)
        install(CODE "execute_process( \
            COMMAND ${CMAKE_COMMAND} -E create_symlink \
            ${CMAKE_INSTALL_BINDIR}/hgrep \
            ${CMAKE_INSTALL_BINDIR}/hfgrep \
            )"
        )
        install(CODE "execute_process( \
            COMMAND ${CMAKE_COMMAND} -E create_symlink \
            ${CMAKE_INSTALL_BINDIR}/hgrep \
            ${CMAKE_INSTALL_BINDIR}/hegrep \
            )"
        )
    else()
        install(TARGETS grep)
        install(CODE "execute_process( \
            COMMAND ${CMAKE_COMMAND} -E create_symlink \
            ${CMAKE_INSTALL_BINDIR}/grep \
            ${CMAKE_INSTALL_BINDIR}/fgrep \
            )"
        )
        install(CODE "execute_process( \
            COMMAND ${CMAKE_COMMAND} -E create_symlink \
            ${CMAKE_INSTALL_BINDIR}/grep \
            ${CMAKE_INSTALL_BINDIR}/egrep \
            )"
        )
    endif()
else()
    add_executable(grep grep.c)
    add_executable(fgrep fgrep.c)
    if(ENABLE_HNAMES)
        set_target_properties(grep PROPERTIES PREFIX "h")
        set_target_properties(fgrep PROPERTIES PREFIX "h")
    endif()
    install(TARGETS grep fgrep)
endif()
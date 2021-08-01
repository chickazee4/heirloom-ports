add_executable(touch touch.c)
target_link_libraries(touch heirloom)

if(ENABLE_HNAMES)
    set_target_properties(touch PROPERTIES PREFIX "h")
    install(
        TARGETS touch
    )
    install(CODE "execute_process( \
        COMMAND ${CMAKE_COMMAND} -E create_symlink \
        ${CMAKE_INSTALL_BINDIR}/htouch \
        ${CMAKE_INSTALL_BINDIR}/hsettime \
        )"
    )
else()
    install(
        TARGETS touch
    )
    install(CODE "execute_process( \
        COMMAND ${CMAKE_COMMAND} -E create_symlink \
        ${CMAKE_INSTALL_BINDIR}/touch \
        ${CMAKE_INSTALL_BINDIR}/settime \
        )"
    )
endif()
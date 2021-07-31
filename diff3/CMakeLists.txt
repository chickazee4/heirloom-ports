add_executable(diff3prog diff3prog.c)
configure_file(diff3.sh diff3 @ONLY)
if(ENABLE_HNAMES)
    set_target_properties(diff3prog PROPERTIES PREFIX "h")
    install(
        FILES ${CMAKE_BINARY_DIR}/diff3/diff3 RENAME hdiff3
        PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
        DESTINATION ${CMAKE_INSTALL_BINDIR}/
    )
else()
    install(
        FILES ${CMAKE_BINARY_DIR}/diff3/diff3
        PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
        DESTINATION ${CMAKE_INSTALL_BINDIR}/
    )
endif()
install(
    TARGETS diff3prog
)
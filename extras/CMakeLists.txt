configure_file(dt.sh dt @ONLY)
configure_file(mktgz.sh mktgz @ONLY)
configure_file(rnr.sh rnr @ONLY)
configure_file(yy.sh yy @ONLY)

install(
    FILES ${CMAKE_BINARY_DIR}/dt ${CMAKE_BINARY_DIR}/mktgz ${CMAKE_BINARY_DIR}/rnr ${CMAKE_BINARY_DIR}/yy
    FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
    DESTINATION ${CMAKE_INSTALL_BINDIR}/
)
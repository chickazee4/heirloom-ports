add_executable(file file.c)
target_link_libraries(file heirloom)

if(ENABLE_HNAMES)
    target_compile_definitions(file PUBLIC -DMAGIC="${USRSHAREDIR}/hfile/magic")
    set_target_properties(file PROPERTIES PREFIX h)
    install(
        FILES ${CMAKE_SOURCE_DIR}/file/magic
        DESTINATION ${USRSHAREDIR}/hfile
    )
else()
    target_compile_definitions(file PUBLIC -DMAGIC="${USRSHAREDIR}/file/magic")
    install(
        FILES ${CMAKE_SOURCE_DIR}/file/magic
        DESTINATION ${USRSHAREDIR}/file
    )
endif()

install(TARGETS file)
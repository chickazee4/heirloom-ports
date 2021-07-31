add_executable(tar tar.c)
target_link_libraries(tar heirloom ${ZLIB_LIBRARIES} ${BZIP2_LIBRARIES})

if(ENABLE_HNAMES)
    set_target_properties(tar PROPERTIES PREFIX "h")
endif()
install(TARGETS tar)
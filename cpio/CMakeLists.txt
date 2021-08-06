set(
    BASE_SRC
    blast.c
    cpio.c
    crc32.c
    expand.c
    explode.c
    inflate.c
    unshrink.c
    version.c
)
add_executable(cpio ${BASE_SRC} nonpax.c flags.c)
add_executable(pax ${BASE_SRC} pax.c) 
target_link_libraries(cpio heirloom uxre ${BZIP2_LIBRARIES} ${ZLIB_LIBRARIES})
target_link_libraries(pax heirloom uxre ${BZIP2_LIBRARIES} ${ZLIB_LIBRARIES})
target_compile_definitions(cpio PUBLIC O_DIRECT)
target_compile_definitions(pax PUBLIC O_DIRECT)

if(ENABLE_HNAMES)
    set_target_properties(cpio PROPERTIES PREFIX "h")
    set_target_properties(pax PROPERTIES PREFIX "h")
endif()
install(TARGETS cpio)
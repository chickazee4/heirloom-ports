add_executable(htar tar.c)
target_link_libraries(htar common ${ZLIB_LIBRARIES} ${BZIP2_LIBRARIES})
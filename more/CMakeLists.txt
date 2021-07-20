add_executable(hmore more.c)
target_link_libraries(hmore common)

install(
    TARGETS hmore
)
install(CODE "execute_process( \
    COMMAND ${CMAKE_COMMAND} -E create_symlink \
    hmore \
    hless \
    )"
)

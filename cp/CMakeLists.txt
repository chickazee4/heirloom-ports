add_executable(hcp cp.c)
target_link_libraries(hcp common)

install(
    TARGETS hcp
)
install(CODE "execute_process( \
    COMMAND ${CMAKE_COMMAND} -E create_symlink \
    hcp \
    hmv \
    )"
)
install(CODE "execute_process( \
    COMMAND ${CMAKE_COMMAND} -E create_symlink \
    hcp \
    hln \
    )"
)

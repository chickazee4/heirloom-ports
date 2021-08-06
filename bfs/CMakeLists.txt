add_executable(bfs bfs.c)
target_link_libraries(bfs heirloom)

if(ENABLE_HNAMES)
    set_target_properties(bfs PROPERTIES PREFIX "h")
endif()
install(TARGETS bfs)
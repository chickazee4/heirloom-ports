add_executable(more more.c)
target_compile_definitions(more PRIVATE USE_TERMCAP)
target_link_libraries(more heirloom uxre ${CURSES_LIBRARIES} ${LIBTINFO})

if(ENABLE_HNAMES)
    set_target_properties(more PROPERTIES PREFIX "h")
endif()
install(TARGETS more)
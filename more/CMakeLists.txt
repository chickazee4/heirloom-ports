add_executable(hmore more.c)
target_link_libraries(hmore heirloom)

if(ENABLE_HNAMES)
    set_target_properties(more PROPERTIES PREFIX "h")
endif()
install(TARGETS more)
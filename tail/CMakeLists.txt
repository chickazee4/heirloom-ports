add_executable(tail tail.c)
target_link_libraries(tail heirloom)
if(ENABLE_HNAMES)
    set_target_properties(tail PROPERTIES PREFIX "h")
endif()
install(TARGETS tail)
add_executable(groups groups.c)
target_link_libraries(groups heirloom)
if(ENABLE_HNAMES)
    set_target_properties(groups PROPERTIES PREFIX "h")
endif()
install(TARGETS groups)
add_executable(listusers listusers.c)
target_link_libraries(listusers heirloom)
if(ENABLE_HNAMES)
    set_target_properties(listusers PROPERTIES PREFIX "h")
endif()
install(TARGETS listusers)
add_executable(deroff deroff.c)
target_link_libraries(deroff heirloom)

if(ENABLE_HNAMES)
    set_target_properties(deroff PROPERTIES PREFIX "h")
endif()
install(TARGETS deroff)
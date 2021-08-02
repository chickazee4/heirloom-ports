add_executable(banner banner.c)
target_link_libraries(banner heirloom)

if(ENABLE_HNAMES)
    set_target_properties(banner PROPERTIES PREFIX h)
endif()
install(TARGETS banner)
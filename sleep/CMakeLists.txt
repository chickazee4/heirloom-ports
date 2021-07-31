add_executable(sleep sleep.c)
target_link_libraries(sleep heirloom)

if(ENABLE_HNAMES)
    set_target_properties(sleep PROPERTIES PREFIX "h")
endif()
install(TARGETS sleep)
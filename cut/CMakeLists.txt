add_executable(cut cut.c)
target_link_libraries(cut heirloom)

if(ENABLE_HNAMES)
    set_target_properties(cut PROPERTIES PREFIX "h")
endif()
install(TARGETS cut)
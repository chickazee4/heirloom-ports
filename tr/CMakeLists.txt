add_executable(tr tr.c)
target_link_libraries(tr heirloom)
if(ENABLE_HNAMES)
    set_target_properties(tr PROPERTIES PREFIX "h")
endif()
install(TARGETS tr)
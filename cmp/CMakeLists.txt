add_executable(cmp cmp.c)
target_link_libraries(cmp heirloom)

if(ENABLE_HNAMES)
    set_target_properties(cmp PROPERTIES PREFIX "h")
endif()
install(TARGETS cmp)
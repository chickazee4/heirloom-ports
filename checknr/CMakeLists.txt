add_executable(checknr checknr.c)
target_link_libraries(checknr heirloom)

if(ENABLE_HNAMES)
    set_target_properties(checknr PROPERTIES PREFIX "h")
endif()
install(TARGETS checknr)
add_executable(nice nice.c)

if(ENABLE_HNAMES)
    set_target_properties(nice PROPERTIES PREFIX "h")
endif()
install(TARGETS nice)
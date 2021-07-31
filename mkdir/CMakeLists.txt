add_executable(mkdir mkdir.c)

if(ENABLE_HNAMES)
    set_target_properties(mkdir PROPERTIES PREFIX "h")
endif()
install(TARGETS mkdir)
add_executable(what what.c)

if(ENABLE_HNAMES)
    set_target_properties(what PROPERTIES PREFIX h)
endif()
install(TARGETS what)
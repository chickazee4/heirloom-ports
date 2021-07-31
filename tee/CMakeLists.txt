add_executable(tee tee.c)
target_link_libraries(tee heirloom)

if(ENABLE_HNAMES)
    set_target_properties(tee PROPERTIES PREFIX "h")
endif()
install(TARGETS tee)
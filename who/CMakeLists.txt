add_executable(who who.c)
target_link_libraries(who heirloom)

if(ENABLE_HNAMES)
    set_target_properties(who PROPERTIES PREFIX "h")
endif()
install(TARGETS who)
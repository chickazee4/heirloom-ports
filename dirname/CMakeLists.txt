add_executable(dirname dirname.c)
target_link_libraries(dirname heirloom)

if(ENABLE_HNAMES)
    set_target_properties(dirname PROPERTIES PREFIX "h")
endif()
install(TARGETS dirname)
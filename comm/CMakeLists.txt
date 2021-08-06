add_executable(comm comm.c)
target_link_libraries(comm heirloom)

if(ENABLE_HNAMES)
    set_target_properties(comm PROPERTIES PREFIX "h")
endif()
install(TARGETS comm)
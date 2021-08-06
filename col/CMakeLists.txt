add_executable(col col.c)
target_link_libraries(col heirloom)

if(ENABLE_HNAMES)
    set_target_properties(col PROPERTIES PREFIX "h")
endif()
install(TARGETS col)
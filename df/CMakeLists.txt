add_executable(df df.c statvfs.c)
target_link_libraries(df heirloom)

if(ENABLE_HNAMES)
    set_target_properties(df PROPERTIES PREFIX "h")
endif()
install(TARGETS df)
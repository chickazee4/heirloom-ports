add_executable(cat cat.c)
target_link_libraries(cat heirloom)

if(ENABLE_HNAMES)
    set_target_properties(cat PROPERTIES PREFIX "h")
endif()
install(TARGETS cat)
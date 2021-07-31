set(
    SED_SRC
    sed0.c
    sed1.c
    version.c
)
add_executable(sed ${SED_SRC})
target_link_libraries(sed heirloom)
if(ENABLE_HNAMES)
    set_target_properties(sed PROPERTIES PREFIX "h")
endif()
install(TARGETS sed)
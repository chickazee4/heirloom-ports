add_executable(diff diff.c)
add_executable(diffh diffh.c)
if(ENABLE_HNAMES)
    set_target_properties(diff PROPERTIES PREFIX "h")
    set_target_properties(diffh PROPERTIES PREFIX "h")
    install(
        TARGETS diff
        TARGETS diffh
    )
else()
    install(TARGETS diff diffh)
endif()
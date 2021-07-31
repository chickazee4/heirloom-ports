set(
    KILL_SRC
    kill.c
    strsig.c
    version.c
)
add_executable(kill ${KILL_SRC})
if(ENABLE_HNAMES)
    set_target_properties(kill PROPERTIES PREFIX "h")
endif()
install(TARGETS kill)
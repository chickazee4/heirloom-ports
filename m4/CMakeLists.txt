set(
    M4_SRC
    m4.c
    m4.h
    m4ext.c
    m4macs.c
    m4y.y
    version.c
)

add_executable(m4 ${M4_SRC})

if(ENABLE_HNAMES)
    set_target_properties(m4 PROPERTIES PREFIX "h")
endif()
install(TARGETS m4)
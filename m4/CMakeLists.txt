set(
    M4_SRC
    m4.c
    m4.h
    m4ext.c
    m4macs.c
    m4y.y
    version.c
)

add_executable(hm4 ${M4_SRC})

install(
    TARGETS hm4
)

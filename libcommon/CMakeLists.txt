set(
    LIBCOMMON_SRC
    asciitype.c
    ib_alloc.c
    ib_close.c
    ib_free.c
    ib_getlin.c
    ib_getw.c
    ib_open.c
    ib_popen.c
    ib_read.c
    ib_seek.c
    oblok.c
    sfile.c
    strtol.c
    getdir.c
    regexpr.c
    gmatch.c
    utmpx.c
    memalign.c
    pathconf.c
    sigset.c
    signal.c
    sigrelse.c
    sighold.c
    sigignore.c
    sigpause.c
    getopt.c
    pfmt.c
    vpfmt.c
    setlabel.c
    setuxlabel.c
    pfmt_label.c
    sysv3.c
    CHECK.c
)

add_library(common SHARED ${LIBCOMMON_SRC})
target_include_directories(common PUBLIC include)

install(
    TARGETS common
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libcommon
)

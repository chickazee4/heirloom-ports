set(
    HSH_SRC
    args.c
    blok.c
    bltin.c
    cmd.c
    ctype.c
    defs.c
    echo.c
    error.c
    expand.c
    fault.c
    func.c
    getopt.c
    gmatch.c
    hash.c
    hashserv.c
    io.c
    jobs.c
    macro.c
    main.c
    mapmalloc.c
    msg.c
    name.c
    print.c
    pwd.c
    service.c
    setbrk.c
    stak.c
    string.c
    strsig.c
    test.c
    ulimit.c
    umask.c
    version.c
    word.c
    xec.c
)

add_executable(sh ${HSH_SRC})
target_include_directories(sh PUBLIC include)

if(ENABLE_HNAMES)
    set_target_properties(sh PROPERTIES PREFIX "h")
    install(
        TARGETS sh
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/hsh
    )
else()
    install(
        TARGETS sh
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/sh
    )
endif()
cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)

project(hsh)

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

add_executable(hsh ${HSH_SRC})
target_include_directories(hsh PUBLIC include)

install(
    TARGETS hsh
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/hsh
)

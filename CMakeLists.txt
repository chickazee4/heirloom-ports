cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMake)

project(heirloom-ports)

option(TAR_ENABLE_ZLIB "Enable support for the ZLib compression library in tar" ON)
option(TAR_ENABLE_BZ2 "Enable support for the Bzip2 compression library in tar" ON)

find_package(RPC REQUIRED)
if(TAR_ENABLE_ZLIB) 
    find_package(ZLIB)
endif()
if(TAR_ENABLE_BZ2)
    find_package(BZip2)
endif()

# build libraries first so we can link the executables against them
add_subdirectory(libuxre)
add_subdirectory(libcommon)
add_subdirectory(libwchar)

add_subdirectory(cat)
add_subdirectory(chmod)
add_subdirectory(chown)
add_subdirectory(cp)
add_subdirectory(dd)
#add_subdirectory(diff) [Build fails, enable when fixed]
add_subdirectory(echo)
add_subdirectory(lex)
add_subdirectory(m4)
add_subdirectory(make)
add_subdirectory(mkdir)
add_subdirectory(sccs)
add_subdirectory(sh)
add_subdirectory(tar)
add_subdirectory(yacc)

set(
    MAN_PAGES
    cat/cat.1
    chmod/chmod.1
    chown/chown.1
    cp/cp.1
    cp/ln.1
    cp/mv.1
    dd/dd.1
    diff/diff.1
    echo/echo.1
    echo/echo.1b
    lex/lex.1
    make/src/make.1
    mkdir/mkdir.1
    more/more.1
    sccs/man/admin.1
    sccs/man/cdc.1
    sccs/man/comb.1
    sccs/man/delta.1
    sccs/man/get.1
    sccs/man/help.1
    sccs/man/prs.1
    sccs/man/prt.1b
    sccs/man/rmdel.1
    sccs/man/sccsdiff.1
    sccs/man/sccsfile.5
    sccs/man/unget.1
    sccs/man/val.1
    sccs/man/vc.1
    sccs/man/what.1
    sh/sh.1
    tar/tar.1
    yacc/yacc.1
)

# install command
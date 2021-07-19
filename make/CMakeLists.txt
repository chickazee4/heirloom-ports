cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)

project( hmake )

set(
    LIBMKSH_SRC
    mksh/dosys.cc
    mksh/globals.cc
    mksh/i18n.cc
    mksh/macro.cc
    mksh/misc.cc
    mksh/mksh.cc
    mksh/posix.cc
    mksh/read.cc
    mksh/wcslen.c
)
set(
    LIBVROOT_SRC
    vroot/access.cc
    vroot/args.cc
    vroot/chdir.cc
    vroot/chmod.cc
    vroot/chown.cc
    vroot/chroot.cc
    vroot/creat.cc
    vroot/execve.cc
    vroot/lock.cc
    vroot/lstat.cc
    vroot/mkdir.cc
    vroot/mount.cc
    vroot/open.cc
    vroot/readlink.cc
    vroot/report.cc
    vroot/rmdir.cc
    vroot/setenv.cc
    vroot/stat.cc
    vroot/statfs.cc
    vroot/truncate.cc
    vroot/unlink.cc
    vroot/unmount.cc
    vroot/utimes.cc
    vroot/vroot.cc
)
set(
    MAKE_SRC
    src/ar.cc
    src/depvar.cc
    src/dist.cc
    src/dmake.cc
    src/doname.cc
    src/dosys.cc
    src/files.cc
    src/getopt.c
    src/globals.cc
    src/implicit.cc
    src/macro.cc
    src/main.cc
    src/make.cc
    src/misc.cc
    src/nse_printdep.cc
    src/nse.cc
    src/parallel.cc
    src/pmake.cc
    src/posix.cc
    src/read.cc
    src/read2.cc
    src/rep.cc
    src/state.cc
    src/version.c
)

add_library(makestate STATIC makestate/ld_file.c makestate/lock.c)
target_include_directories(makestate PUBLIC include)
add_library(mksdmsi18n STATIC mksdmsi18n/libmksdmsi18n_init.cc)
target_include_directories(mksdmsi18n PUBLIC include)
add_library(mksh STATIC ${LIBMKSH_SRC})
target_include_directories(mksh PUBLIC include)
add_library(vroot STATIC ${LIBVROOT_SRC})
target_include_directories(vroot PUBLIC include)
add_executable(hmake ${MAKE_SRC} )

target_link_libraries(hmake makestate mksdmsi18n mksh vroot)

install(
    TARGETS hmake
    PUBLIC_HEADER
     DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/hmake
)

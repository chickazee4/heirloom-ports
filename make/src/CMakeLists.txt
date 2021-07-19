cmake_minimum_required( VERSION 3.1 )
project( omake )

include_directories( ../include )

target_sources(make
    PRIVATE
        ar.cc
        depvar.cc
        dist.cc
        dmake.cc
        doname.cc
        dosys.cc
        files.cc
        getopt.c
        globals.cc
        implicit.cc
        macro.cc
        main.cc
        make.cc
        misc.cc
        nse_printdep.cc
        nse.cc
        parallel.cc
        pmake.cc
        posix.cc
        read.cc
        read2.cc
        rep.cc
        state.cc
        version.c
)

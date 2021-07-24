set(
    LIBCASSI_SRC
    cassi/cmrcheck.c
    cassi/deltack.c
    cassi/error.c
    cassi/filehand.c
    cassi/gf.c
)
set(
    LIBCOMOBJ_SRC
    comobj/auxf.c
    comobj/chkid.c
    comobj/chksid.c
    comobj/cmpdate.c
    comobj/date_ab.c
    comobj/date_ba.c
    comobj/del_ab.c
    comobj/del_ba.c
    comobj/dodelt.c
    comobj/dofile.c
    comobj/dohist.c
    comobj/doie.c
    comobj/dolist.c
    comobj/encode.c
    comobj/eqsid.c
    comobj/flushto.c
    comobj/fmterr.c
    comobj/getline.c
    comobj/getser.c
    comobj/logname.c
    comobj/newsid.c
    comobj/newstats.c
    comobj/permiss.c
    comobj/pf_ab.c
    comobj/putline.c
    comobj/rdmod.c
    comobj/setup.c
    comobj/sid_ab.c
    comobj/sid_ba.c
    comobj/sidtoser.c
    comobj/sinit.c
    comobj/stats_ab.c
    comobj/strptim.c
)
set(
    MPWLIB_SRC
    mpwlib/abspath.c
    mpwlib/any.c
    mpwlib/cat.c
    mpwlib/dname.c
    mpwlib/fatal.c
    mpwlib/fdfopen.c
    mpwlib/fmalloc.c
    mpwlib/getopt.c
    mpwlib/had.c
    mpwlib/imatch.c
    mpwlib/index.c
    mpwlib/lockit.c
    mpwlib/patoi.c
    mpwlib/repl.c
    mpwlib/satoi.c
    mpwlib/setsig.c
    mpwlib/sname.c
    mpwlib/strend.c
    mpwlib/trnslat.c
    mpwlib/userexit.c
    mpwlib/xcreat.c
    mpwlib/xlink.c
    mpwlib/xmsg.c
    mpwlib/xopen.c
    mpwlib/xpipe.c
    mpwlib/xunlink.c
    mpwlib/zero.c
)
set(
    SCCS_LIBS
    cassi
    comobj
    mpwlib
)
add_library(cassi STATIC ${LIBCASSI_SRC})
target_include_directories(cassi PUBLIC include)
add_library(comobj STATIC ${LIBCOMOBJ_SRC})
target_include_directories(comobj PUBLIC include)
add_library(mpwlib STATIC ${MPWLIB_SRC})
target_include_directories(mpwlib PUBLIC include)
add_executable(admin src/admin.c src/version.c)
target_link_libraries(admin ${SCCS_LIBS})
add_executable(comb src/comb.c src/version.c)
target_link_libraries(comb ${SCCS_LIBS})
add_executable(delta src/delta.c src/version.c)
target_link_libraries(delta ${SCCS_LIBS})
add_executable(prs src/prs.c src/version.c)
target_link_libraries(prs ${SCCS_LIBS})
add_executable(prt src/prt.c src/version.c)
target_link_libraries(prt ${SCCS_LIBS})
add_executable(rmchg src/rmchg.c src/version.c)
target_link_libraries(rmchg ${SCCS_LIBS})
add_executable(unget src/unget.c src/version.c)
target_link_libraries(unget ${SCCS_LIBS})
add_executable(val src/val.c src/version.c)
target_link_libraries(val ${SCCS_LIBS})
add_executable(vc src/vc.c src/version.c)
target_link_libraries(vc ${SCCS_LIBS})
add_executable(what src/what.c src/version.c)
target_link_libraries(what ${SCCS_LIBS})
configure_file(src/sccsdiff.sh hsccsdiff @ONLY)

install(
    TARGETS admin comb delta prs prt rmchg unget val vc what
    RUNTIME
     DESTINATION ${CMAKE_INSTALL_BINDIR}/hsccs
    PUBLIC_HEADER
     DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/hsccs
)

install(
    FILES hsccsdiff DESTINATION ${CMAKE_INSTALL_BINDIR}/hsccs
)

add_executable(hsccs src/sccs.c src/version.c)
target_link_libraries(hsccs ${SCCS_LIBS})

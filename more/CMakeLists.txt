find_package(Curses REQUIRED)
find_library(
    LIBTINFO 
    NAMES libtinfo libtinfo.so.5 libtinfo.so.6 libtinfo.so.6.2
    HINTS /lib64 /usr/lib64 /lib /usr/lib  
)
if(NOT DEFINED(LIBTINFO))
    add_executable(more more.c)
    target_compile_definitions(more PRIVATE USE_TERMCAP)
    target_link_libraries(more heirloom uxre ${CURSES_LIBRARIES} ${LIBTINFO})

    if(ENABLE_HNAMES)
        set_target_properties(more PROPERTIES PREFIX "h")
    endif()
    install(TARGETS more)
else()
    message("Could not find libtinfo, not building more.")
endif()
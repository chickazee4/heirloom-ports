set(
    AR_SRC
    append.c
    ar.c
    archive.c
    contents.c
    delete.c
    extract.c
    misc.c
    move.c
    print.c
    replace.c
)

add_executable(ar ${AR_SRC})
target_link_libraries(ar heirloom)
target_include_directories(ar PUBLIC include)

if(ENABLE_HNAMES)
    set_target_properties(ar PROPERTIES PREFIX "h")
    install(
        TARGETS ar
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/har
    )
else() 
    install(
        TARGETS ar
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/ar
    )
endif()
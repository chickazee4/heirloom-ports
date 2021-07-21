set(
    LIBWCHAR_SRC
    mblen.c
    mbrtowc.c
    mbstowcs.c
    mbtowc.c
    wcslen.c
    wcsncmp.c
    wctfunc.c
    wctomb.c
    wctype.c
    wcwidth.c
)
add_library(wchar SHARED ${LIBWCHAR_SRC})
target_include_directories(wchar PUBLIC include)
target_link_libraries(wchar common)

install(
    TARGETS wchar
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/libwchar
)

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
add_library(wchar STATIC ${LIBWCHAR_SRC})
target_include_directories(wchar PUBLIC include)
target_link_libraries(wchar heirloom)
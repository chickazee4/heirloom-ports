set(
    SED_SRC
    sed0.c
    sed1.c
    version.c
)
add_executable(hsed ${SED_SRC})
target_link_libraries(hsed common)
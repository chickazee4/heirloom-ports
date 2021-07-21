set(
    DIFF_SRC
    diff.c
    diffdir.c
    diffreg.c
    diffver.c
)
add_executable(hdiff ${DIFF_SRC})
target_link_libraries(hdiff common)
add_executable(hdiffh diffh.c)
target_link_libraries(hdiffh common)
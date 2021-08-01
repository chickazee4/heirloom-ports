set(
    TEST_SRC 
    helper.c
    main.c
    test.c
    version.c
)

add_executable(test ${TEST_SRC})
target_link_libraries(test heirloom)

if(ENABLE_HNAMES)
    set_target_properties(test PROPERTIES PREFIX "h")
endif()
install(TARGETS test)
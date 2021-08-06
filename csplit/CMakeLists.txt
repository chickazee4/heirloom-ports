set(CMAKE_C_FLAGS -lm)
add_executable(csplit csplit.c)
target_link_libraries(csplit heirloom)

if(ENABLE_HNAMES)
    set_target_properties(csplit PROPERTIES PREFIX "h")
endif()
install(TARGETS csplit)
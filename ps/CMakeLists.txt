add_executable(hps ps.c)
target_link_libraries(hps common)
configure_file(ps.dfl ps.conf)
install(FILES ps.conf DESTINATION /etc/)
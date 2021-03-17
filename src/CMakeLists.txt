add_library(endianness endianness.c)
target_link_libraries(endianness PUBLIC endianness-h)
install(TARGETS endianness DESTINATION   ${CMAKE_INSTALL_LIBDIR}/cborg)
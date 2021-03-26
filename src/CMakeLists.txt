add_library(cborg-endianness endianness.c)
target_link_libraries(cborg-endianness PUBLIC cborg-endianness-h)
install(TARGETS cborg-endianness DESTINATION   ${CMAKE_INSTALL_LIBDIR}/cborg)
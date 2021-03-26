add_library(cborg-endianness-h INTERFACE)
target_include_directories(cborg-endianness-h INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
install(FILES cborg/endianness.h DESTINATION  ${CMAKE_INSTALL_INCLUDEDIR}/cborg)
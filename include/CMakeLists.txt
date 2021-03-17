add_library(endianness-h INTERFACE)
target_include_directories(endianness-h INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
install(FILES endianness.h DESTINATION  ${CMAKE_INSTALL_INCLUDEDIR}/cborg)
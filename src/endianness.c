#include <cborg/endianness.h>

bool is_little_endian() {
  int x = 1;
  return (bool)*(char *)&x;
}

uint16_t bswap16(uint16_t v) { return ((v << 8 & 0xff00) | (v >> 8 & 0x00ff)); }

uint32_t bswap32(uint32_t v) {
  return (((v << 24) & 0xff000000) | ((v << 8) & 0x00ff0000) |
          ((v >> 8) & 0x0000ff00) | ((v >> 24) & 0x000000ff));
}

uint64_t bswap64(uint64_t v) {
  return (
      ((v << 56) & 0xff00000000000000ul) | ((v << 40) & 0x00ff000000000000ul) |
      ((v << 24) & 0x0000ff0000000000ul) | ((v << 8) & 0x000000ff00000000ul) |
      ((v >> 8) & 0x00000000ff000000ul) | ((v >> 24) & 0x0000000000ff0000ul) |
      ((v >> 40) & 0x000000000000ff00ul) | ((v >> 56) & 0x00000000000000fful));
}

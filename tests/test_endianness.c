#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include <cborg/endianness.h>

int main() {
  assert(0x2301 == bswap16(0x0123));
  printf("%u\n", bswap16(0x0123));

  assert(0x67452301u == bswap32(0x01234567u));
  printf("%u\n", bswap32(0x01234567u));

  assert(0xEFCDAB8967452301llu == bswap64(0x0123456789ABCDEFllu));
  printf("%"PRIu64"\n", bswap64(0x0123456789ABCDEFllu));
  return EXIT_SUCCESS;
}

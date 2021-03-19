#ifndef _CBORG_ENDIANNESS_H
#define _CBORG_ENDIANNESS_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

bool is_little_endian();

uint16_t bswap16(uint16_t v);

uint32_t bswap32(uint32_t v);

uint64_t bswap64(uint64_t v);

#endif

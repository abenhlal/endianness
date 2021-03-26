#ifndef _CBORG_ENDIANNESS_H
#define _CBORG_ENDIANNESS_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

bool cb_is_little_endian();

uint16_t cb_bswap16(uint16_t v);

uint32_t cb_bswap32(uint32_t v);

uint64_t cb_bswap64(uint64_t v);

#endif

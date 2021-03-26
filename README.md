# libcborg-endianness

## Build and Install

```sh
$ git clone https://github.com/abenhlal/endianness.git
$ cd endianness
$ mkdir build
$ cd build
$ cmake ..
$ make
$ make test
$ sudo make install
```

## Uninstall

```sh
$ sudo make uninstall
```

## Usage and build

```sh
$ gcc example.c -o example.bin -L/usr/local/lib/cborg -lcborg-endianness
$ ./example.bin
is_little_endian = 1
8961
1732584193
17279655951921914625
```

```C
#include <stdio.h>
#include <inttypes.h>
#include <cborg/endianness.h>

int main() {
  printf("cb_is_little_endian = %d\n", cb_is_little_endian());
  printf("%u\n", cb_bswap16(0x0123));
  printf("%u\n", cb_bswap32(0x01234567u));
  printf("%"PRIu64"\n", cb_bswap64(0x0123456789ABCDEFllu));
  return 0;
}

```

## License

[MIT](LICENSE)
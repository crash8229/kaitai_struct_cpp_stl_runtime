#ifndef _BYTESWAP_H
#define _BYTESWAP_H	1

/* The following definitions must all be macros, otherwise some
   of the possible optimizations are not possible.  */

/* Return a value with both bytes in the 16 bit argument swapped.  */
#define bswap_16(x) __bswap16 (x)

/* Return a value with all bytes in the 32 bit argument swapped.  */
#define bswap_32(x) __bswap32 (x)

/* Return a value with all bytes in the 64 bit argument swapped.  */
#define bswap_64(x) __bswap64 (x)

#endif /* byteswap.h */

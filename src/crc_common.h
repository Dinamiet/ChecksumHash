#ifndef __CRC_COMMON__
#define __CRC_COMMON__

#define CRC8_POLYNOMIAL	 0x07
#define CRC16_POLYNOMIAL 0x1021
#define CRC32_POLYNOMIAL 0x04C11DB7

#define CRC8_MSB  (1 << 7)
#define CRC16_MSB (1 << 15)
#define CRC32_MSB (1 << 31)

#define CRC16_2_MSB 8
#define CRC32_2_MSB 24

#define BITS_IN_BYTE 8

#endif

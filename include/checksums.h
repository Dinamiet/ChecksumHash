#ifndef _CHECKSUM_H_
#define _CHECKSUM_H_

#include <stddef.h>
#include <stdint.h>

#define CRC8_SEED  0x07       /**< Common CRC8 polynomial seed */
#define CRC16_SEED 0x1021     /**< Common CRC16 polynomial seed */
#define CRC32_SEED 0x04C11DB7 /**< Common CRC32 polynomial seed */

uint8_t  CRC8(void* data, size_t size, uint8_t seed);
uint16_t CRC16(void* data, size_t size, uint16_t seed);
uint32_t CRC32(void* data, size_t size, uint32_t seed);

uint8_t  CRC8_Fast(void* data, size_t size);
uint16_t CRC16_Fast(void* data, size_t size);
uint32_t CRC32_Fast(void* data, size_t size);

#endif

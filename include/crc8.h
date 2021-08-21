#ifndef __CRC8_H__
#define __CRC8_H__

#include <stdint.h>
#include <stddef.h>

uint8_t CRC8_Calculate(void* data, size_t size);

#endif

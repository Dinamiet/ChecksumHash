#ifndef __CRC16_H__
#define __CRC16_H__

#include <stdint.h>
#include <stddef.h>

uint16_t CRC16_Calculate(void* data, size_t size);

#endif

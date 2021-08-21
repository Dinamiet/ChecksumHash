#ifndef __CRC32_H__
#define __CRC32_H__

#include <stdint.h>
#include <stddef.h>

uint32_t CRC32_Calculate(void* data, size_t size);

#endif

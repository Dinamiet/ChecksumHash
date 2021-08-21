#ifndef __FNV_H__
#define __FNV_H__

#include <stdint.h>
#include <stddef.h>

uint32_t FNV_Hash(void* data, size_t size);

#endif

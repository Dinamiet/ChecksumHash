#ifndef _HASHES_H_
#define _HASHES_H_

#include <stddef.h>
#include <stdint.h>

uint32_t FNV(void* data, size_t size);
uint32_t SDBM(void* data, size_t size);

#endif

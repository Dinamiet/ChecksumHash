#include "fnv.h"

#define FNV_PRIME_32  0x01000193
#define FNV_OFFSET_32 0x811C9DC5

uint32_t FNV_Hash(void* _data, size_t size)
{
	uint8_t* data = _data;
	uint32_t hash = FNV_OFFSET_32;
	for (size_t i = 0; i < size; i++)
	{
		hash ^= data[i];
		hash *= FNV_PRIME_32;
	}

	return hash;
}

#include "fnv.h"

#define FNV_PRIME_32  0x01000193
#define FNV_OFFSET_32 0x811C9DC5

uint32_t FNV_Hash(uint8_t* data, uint32_t length)
{
	uint32_t hash = FNV_OFFSET_32;
	for (uint32_t i = 0; i < length; i++)
	{
		hash ^= data[i];
		hash *= FNV_PRIME_32;
	}

	return hash;
}

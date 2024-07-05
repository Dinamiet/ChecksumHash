#include "hashes.h"

#define FNV_STARTING 0x811C9DC5
#define FNV_PRIME    0x01000193

uint32_t FNV(void* _data, size_t size)
{
	uint8_t* data = _data;
	uint32_t fnv  = FNV_STARTING;
	for (size_t i = 0; i < size; i++)
	{
		fnv ^= *data++;
		fnv *= FNV_PRIME;
	}

	return fnv;
}

uint32_t SDBM(void* _data, size_t size)
{
	uint8_t* data = _data;
	uint32_t sdbm = 0;

	for (size_t i = 0; i < size; i++) sdbm = (*data++) + (sdbm << 6) + (sdbm << 16) - sdbm;

	return sdbm;
}

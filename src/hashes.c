#include "hashes.h"

#define FNV_STARTING 0x811C9DC5
#define FNV_PRIME    0x01000193

uint32_t FNV(void* _data, size_t size)
{
	uint8_t* data = _data;
	uint32_t fnv  = FNV_STARTING;
	uint8_t* stopAddress = data + size;

	while (data < stopAddress)
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
	uint8_t* stopAddress = data + size;

	while (data < stopAddress) { sdbm = (*data++) + (sdbm << 6) + (sdbm << 16) - sdbm; }

	return sdbm;
}

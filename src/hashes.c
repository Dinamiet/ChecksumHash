#include "hashes.h"

#define FNV_STARTING 0x811C9DC5
#define FNV_PRIME    0x01000193

uint32_t FNV(const void* _data, const size_t size)
{
	const uint8_t* data        = _data;
	const uint8_t* stopAddress = data + size;

	uint32_t fnv = FNV_STARTING;

	while (data < stopAddress)
	{
		fnv ^= *data++;
		fnv *= FNV_PRIME;
	}

	return fnv;
}

uint32_t SDBM(const void* _data, const size_t size)
{
	const uint8_t* data        = _data;
	const uint8_t* stopAddress = data + size;

	uint32_t sdbm = 0;

	while (data < stopAddress) { sdbm = (*data++) + (sdbm << 6) + (sdbm << 16) - sdbm; }

	return sdbm;
}

#include "sdbm.h"

#include <assert.h>

uint32_t SDBM(const void* _data, const size_t size)
{
	assert(_data != NULL);

	const uint8_t* data        = _data;
	const uint8_t* stopAddress = data + size;

	uint32_t sdbm = 0;

	while (data < stopAddress) { sdbm = (*data++) + (sdbm << 6) + (sdbm << 16) - sdbm; }

	return sdbm;
}

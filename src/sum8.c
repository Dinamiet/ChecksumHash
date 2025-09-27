#include "sum8.h"

#include <assert.h>

uint8_t SUM8(const void* _data, const size_t size)
{
	assert(_data != NULL);

	const uint8_t* data        = _data;
	const uint8_t* stopAddress = data + size;

	uint8_t sum = 0;
	while (data < stopAddress) { sum += *data++; }

	return sum;
}

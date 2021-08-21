#include "sdbm.h"

uint32_t SDBM_Hash(void* _data, size_t size)
{
	uint8_t* data= _data;
	uint32_t hash = 0;
	for (size_t i = 0; i < size; i++) { hash = data[i] + (hash << 6) + (hash << 16) - hash; }
	return hash;
}

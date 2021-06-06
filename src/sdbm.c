#include "sdbm.h"

uint32_t SDBM_Hash(uint8_t* data, uint16_t length)
{
	uint32_t hash = 0;
	for (uint32_t i = 0; i < length; i++) { hash = data[i] + (hash << 6) + (hash << 16) - hash; }
	return hash;
}

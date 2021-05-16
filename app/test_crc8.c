#include "crc8.h"

#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main()
{
	uint8_t data1[5] = {0x12, 0x34, 0x56, 0x78, 0x09};
	uint8_t crc		 = CRC8_Calculate(data1, 5);
	if (crc ^ 0x6B)
	{
		printf("0x%X expected 0x6B\n", crc);
		return 1;
	}

	uint8_t data2[] = {0xcb, 0x25, 0x06, 0xb4, 0xda, 0xf2, 0x2e, 0x74, 0x57, 0xa2, 0x48, 0x53, 0x1b, 0x17, 0x25, 0xf3};
	crc		 = CRC8_Calculate(data2, 16);
	if (crc ^ 0x8A)
	{
		printf("0x%X expected 0x8A\n", crc);
		return 2;
	}

	char* checkString= "123456789";
	crc= CRC8_Calculate((uint8_t*)checkString, strlen(checkString));
	if (crc ^ 0xF4)
	{
		printf("String check failed\n");
		return 3;
	}

	printf("SUCC\n");
	return 0;
}

#include <stdio.h>
#include <stdint.h>

#define START_POLINOMIAL 0x07
#define LOOKUP_SIZE 256

uint8_t lookup[LOOKUP_SIZE];

void CalculateTable()
{
	uint8_t generator= START_POLINOMIAL;
	for (uint16_t divident = 0; divident < LOOKUP_SIZE; divident++)
	{
		uint8_t currByte= divident;
		for (uint16_t bit = 0; bit < 8; bit++)
		{
			if ((currByte & 0x80) != 0)
			{
				currByte <<= 1;
				currByte ^= generator;
			}
			else
			{
				currByte <<= 1;
			}
		}
		lookup[divident]= currByte;
		printf("0x%x, ", currByte);
	}
}

int main()
{
	printf("{");
	CalculateTable();
	printf("}\n");

	for (uint16_t i = 0; i < LOOKUP_SIZE; i++)
	{
		for (uint16_t j = i+1; j < LOOKUP_SIZE; j++)
		{
			if (lookup[i] == lookup[j])
			{
				printf("CLASH on index: %d and %d\n", i, j);
				return 1;
			}
		}

	}
	printf("No clashes detected\n");
	return 0;
}

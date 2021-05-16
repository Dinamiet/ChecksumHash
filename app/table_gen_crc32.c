#include <stdint.h>
#include <stdio.h>

#define START_POLINOMIAL 0x04C11DB7;
#define LOOKUP_SIZE		 256

uint32_t lookup[LOOKUP_SIZE];

void CalculateTable()
{
	uint32_t generator = START_POLINOMIAL;
	for (uint16_t divident = 0; divident < LOOKUP_SIZE; divident++)
	{
		uint32_t currValue = divident << 24;
		for (uint16_t bit = 0; bit < 8; bit++)
		{
			if ((currValue & 0x80000000) != 0)
			{
				currValue <<= 1;
				currValue ^= generator;
			}
			else
			{
				currValue <<= 1;
			}
		}
		lookup[divident] = currValue;
		printf("0x%.8X, ", currValue);
	}
}

int main()
{
	printf("{");
	CalculateTable();
	printf("}\n");

	for (uint16_t i = 0; i < LOOKUP_SIZE; i++)
	{
		for (uint16_t j = i + 1; j < LOOKUP_SIZE; j++)
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

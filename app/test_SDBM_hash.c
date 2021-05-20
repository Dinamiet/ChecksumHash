#include "sdbm.h"

#include <stdio.h>
#include <string.h>

int main() {

	char * testString1= "Hello World";
	uint32_t hash= SDBM_Hash((uint8_t *) testString1, strlen(testString1));
	if (hash != 0xC908F484)
	{
		printf("Incorrect hash value %X, expected C908F484", hash);
		return 1;
	}
	return 0;
}

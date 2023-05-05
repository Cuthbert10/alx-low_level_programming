#include "main.h"

/**
 * get_endianness - checks if the data is stored as little or big endian.
 * Return: 0 if big endian and 1 if little.
 */

int get_endianness(void)
{

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}

#include "main.h"

/**
 * set_bit - bit is set to 1 at given index.
 * @n: Number to change
 * @index: the index in the binary number.
 * Return: successful if 1 or error if -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}

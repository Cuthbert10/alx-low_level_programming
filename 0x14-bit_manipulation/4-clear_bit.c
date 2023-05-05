#include "main.h"

/**
 * clear_bit - Bit is cleared to 0 at given index.
 * @n: number to change.
 * @index: The index in the binary number.
 * Return: Successful if 1 or error if -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}

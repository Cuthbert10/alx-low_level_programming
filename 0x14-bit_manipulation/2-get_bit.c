#include "main.h"

/**
 * get_bit - Gets bit at index in a decimal.
 * @n: Number to look for.
 * @index: the index in the binary number.
 * Return: the value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);

	if (index > max_bits)
		return (-1);
	bit = ((n >> index) & 1);

	return (bit);
}

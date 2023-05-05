#include "main.h"

/**
 * flip_bits - counts how many bits to get from one number to another
 * @n: the 1st number.
 * @m: the 2nd number.
 * Return: how many bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	difference = n ^ m;

	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff_bits);
}

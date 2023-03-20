#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: integer
 * Return: absolute value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}

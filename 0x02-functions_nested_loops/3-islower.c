#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character
 * @c: char to check
 * Return: 1 if lower case, 0 if upper case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: char to check
 * Return: 1 if lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

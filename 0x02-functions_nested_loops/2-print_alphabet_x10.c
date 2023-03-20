#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet, in lowercase
 * Return: Always 0 
 */
void print_alphabet_x10(void)
{
	char letter;
	int counter;
	for (counter = 1; counter <= 10; counter++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
	}
}

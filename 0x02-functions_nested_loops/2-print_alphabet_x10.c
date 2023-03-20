#include "main.h"
/**
 * main - Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 
 */
void print_alphabet_x10(void);
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

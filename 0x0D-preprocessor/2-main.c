#include <stdio.h>

/**
 * main - prints current filename to std output
 * Return: 0 on success
 */

int main(void)
{
	printf("This program was compiled from the file %s\n", __FILE__);
	return (0);
}

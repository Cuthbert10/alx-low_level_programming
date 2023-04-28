#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Sentence is printed before main.
 * Function is able to be executed.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


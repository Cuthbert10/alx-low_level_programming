#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arguments;
unsigned int i;
char *current_string;

/* Initialize the arguments list */
va_start(arguments, n);

/* Print each string with the specified separator */
for (i = 0; i < n; i++)
{
current_string = va_arg(arguments, char*);

if (current_string == NULL)
printf("(nil)");
else
printf("%s", current_string);

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

/* Clean up the arguments list */
va_end(arguments);

/* Print a new line at the end */
printf("\n");
}


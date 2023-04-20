#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arguments;
unsigned int i;
int current_number;

/* Initialize the arguments list */
va_start(arguments, n);

/* Print each number with the specified separator */
for (i = 0; i < n; i++) 
{
current_number = va_arg(arguments, int);
printf("%d", current_number);
if (i != n - 1 && separator != NULL) 
{
printf("%s", separator);
}
}

/* Clean up the arguments list */
va_end(arguments);

/* Print a new line at the end */
printf("\n");
}


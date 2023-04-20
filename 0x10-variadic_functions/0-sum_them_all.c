#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list arguments;
    int sum = 0;
    unsigned int i;

    /* Initialize the arguments list */
    va_start(arguments, n);

    /* Add up all the arguments */
    for (i = 0; i < n; i++) {
        sum += va_arg(arguments, int);
    }

    /* Clean up the arguments list */
    va_end(arguments);

    return sum;
}


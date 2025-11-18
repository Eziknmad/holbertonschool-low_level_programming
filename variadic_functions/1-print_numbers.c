#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers separated by a string
 * @separator: the string printed between numbers
 * @n: the number of integers passed to the function
 *
 * Description: Prints all the numbers passed after n separated by separator.
 * If separator is NULL, it is not printed.
 * Prints a new line at the end.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}


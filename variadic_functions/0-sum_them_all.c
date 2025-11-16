#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - return the sum of all its parameters
* @n: the number of parameters to add
*
* Description: This function uses variadic arguments to add
* any number of integers together, or n is 0, return 0.
*
* Resturn: sum of all parameters, or 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}

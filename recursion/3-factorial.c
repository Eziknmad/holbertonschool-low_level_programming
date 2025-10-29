#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to calculate the factorial for
 * Return: factorial of n, -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)        /* Negative numbers are invalid */
		return (-1);
	if (n == 0)       /* Base case: 0! = 1 */
		return (1);

	return (n * factorial(n - 1));  /* Recursive step */
}

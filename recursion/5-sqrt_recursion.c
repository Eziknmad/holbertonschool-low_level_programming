#include "main.h"

/**
 * find_root - helper function to find natural square root
 * @n: number to find square root of
 * @guess: current guess
 *
 * Return: the natural square root, or -1 if not found
 */
int find_root(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_root(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root of
 *
 * Return: natural square root, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}

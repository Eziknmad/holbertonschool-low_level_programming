#include "main.h"

/**
 * check_prime - helper function to check if number is prime
 * @n: number to check
 * @divisor: current divisor
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

#include <stdio.h>

/**
 * main - Prints digits 0 to 9 without using char variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');

	putchar('\n');

	return (0);
}

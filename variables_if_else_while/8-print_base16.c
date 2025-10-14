#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	/* Print 0-9 */
	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	/* Print a-f */
	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	/* Print newline */
	putchar('\n');

	return (0);
}

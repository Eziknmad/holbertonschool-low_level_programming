#include <stdio.h>

/**
 * main - Prints lowercase and uppercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase */
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	/* Print uppercase */
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	/* Print newline */
	putchar('\n');

	return (0);
}

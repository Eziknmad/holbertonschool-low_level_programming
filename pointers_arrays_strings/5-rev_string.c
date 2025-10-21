#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	/* Get string length */
	while (s[len] != '\0')
		len++;

	/* Swap characters from start and end moving to center */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

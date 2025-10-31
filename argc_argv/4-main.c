#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - test file to understand number validation
 * @argc: number of command-line arguments
 * @argv: array containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("'%s' contains a non-digit at position %d\n", argv[i], j);
				break;
			}
		}
	}
	return (0);
}

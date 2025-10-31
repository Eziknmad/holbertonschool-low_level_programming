#include <stdio.h>

/**
 * main - test file for understanding arguments
 * @argc: number of command-line arguments
 * @argv: array containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	printf("Argument count: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}

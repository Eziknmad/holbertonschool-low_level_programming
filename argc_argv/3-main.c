#include <stdio.h>
#include <stdlib.h>

/**
 * main - testing multiplication manually
 * @argc: number of command-line arguments
 * @argv: array containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("%d * %d = %d\n", a, b, a * b);
	}
	else
	{
		printf("Usage: ./mul <num1> <num2>\n");
	}

	return (0);
}

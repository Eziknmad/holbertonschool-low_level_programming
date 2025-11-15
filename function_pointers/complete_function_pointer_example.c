#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: pointer to the function that prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

/**
 * print_normal - prints a name normally
 * @name: the name to print
 *
 * Return: Nothing
 */
void print_normal(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_uppercase - prints a name in uppercase
 * @name: the name to print
 *
 * Return: Nothing
 */
void print_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
	printf("\n");
}

/**
 * print_with_stars - prints a name with stars around it
 * @name: the name to print
 *
 * Return: Nothing
 */
void print_with_stars(char *name)
{
	printf("*** %s ***\n", name);
}

/**
 * main - demonstrates function pointers
 *
 * Return: Always 0
 */
int main(void)
{
	printf("=== Function Pointer Demo ===\n\n");

	/* Same function, different behaviors! */
	print_name("Alice", print_normal);
	print_name("Bob", print_uppercase);
	print_name("Charlie", print_with_stars);

	printf("\n=== The Magic Explained ===\n");
	printf("We used ONE function (print_name) but got ");
	printf("THREE different outputs!\n");
	printf("That's the power of function pointers!\n");

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the function to execute on each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

/**
 * print_normal - prints an integer normally
 * @num: the integer to print
 *
 * Return: Nothing
 */
void print_normal(int num)
{
	printf("%d\n", num);
}

/**
 * print_hex - prints an integer in hexadecimal
 * @num: the integer to print
 *
 * Return: Nothing
 */
void print_hex(int num)
{
	printf("0x%x\n", num);
}

/**
 * print_doubled - prints an integer doubled
 * @num: the integer to print
 *
 * Return: Nothing
 */
void print_doubled(int num)
{
	printf("%d * 2 = %d\n", num, num * 2);
}

/**
 * print_squared - prints an integer squared
 * @num: the integer to print
 *
 * Return: Nothing
 */
void print_squared(int num)
{
	printf("%d^2 = %d\n", num, num * num);
}

/**
 * main - demonstrates array_iterator with different actions
 *
 * Return: Always 0
 */
int main(void)
{
	int numbers[5] = {2, 4, 6, 8, 10};

	printf("=== Original Array ===\n");
	array_iterator(numbers, 5, print_normal);

	printf("\n=== In Hexadecimal ===\n");
	array_iterator(numbers, 5, print_hex);

	printf("\n=== Doubled ===\n");
	array_iterator(numbers, 5, print_doubled);

	printf("\n=== Squared ===\n");
	array_iterator(numbers, 5, print_squared);

	printf("\n=== The Magic ===\n");
	printf("Same array, same function (array_iterator),\n");
	printf("but 4 different results!\n");

	return (0);
}


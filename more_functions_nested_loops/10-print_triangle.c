#include "main.h"

/**
 * print_triangle - prints a triangle of size 'size' using '#'
 * @size: size of the triangle
 *
 * Description: prints a right-aligned triangle with '#' characters.
 * If size <= 0, just prints a newline.
 */
void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
			_putchar(' ');
		for (col = 1; col <= row; col++)
			_putchar('#');
		_putchar('\n');
	}
}

#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything based on format
 * @format: List of types of arguments passed to the function
 *          c: char, i: integer, f: float, s: char *
 *
 * Description: Prints values with comma separation.
 *              If string is NULL, prints (nil).
 *              Ignores any character not c, i, f, or s.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

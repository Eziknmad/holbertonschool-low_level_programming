#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments passed
 *
 * Description: c = char, i = int, f = float, s = char *.
 * Prints values separated by ", ".
 * Prints (nil) for NULL strings.
 * Ignores invalid chars.
 * Prints newline at the end.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
    va_list ap;
    unsigned int i = 0;
    char *str;
    char c;
    int printed = 0; /* flag to track if anything was printed */

    va_start(ap, format);

    while (format != NULL && format[i] != '\0')
    {
        if (format[i] == 'c')
        {
            c = (char)va_arg(ap, int);
            if (printed)
                printf(", ");
            printf("%c", c);
            printed = 1;
        }
        if (format[i] == 'i')
        {
            if (printed)
                printf(", ");
            printf("%d", va_arg(ap, int));
            printed = 1;
        }
        i++;
    }

    i = 0;

    while (format != NULL && format[i] != '\0')
    {
        if (format[i] == 'f')
        {
            if (printed)
                printf(", ");
            printf("%f", va_arg(ap, double));
            printed = 1;
        }
        if (format[i] == 's')
        {
            str = va_arg(ap, char *);
            if (printed)
                printf(", ");
            if (str == NULL)
                printf("(nil)");
            else
                printf("%s", str);
            printed = 1;
        }
        i++;
    }

    printf("\n");
    va_end(ap);
}

#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * you can make it like this to if (c >= 64 && c <= 91)
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

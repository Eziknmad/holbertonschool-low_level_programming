#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str = NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}

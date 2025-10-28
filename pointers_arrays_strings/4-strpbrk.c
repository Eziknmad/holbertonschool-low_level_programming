#include "main.h"

/**
* _strpbrk - search a string for any of the set of  bytes
* @s: the string to be scanned
* @accept: the string containing  the characters to math
*
* Return: pointer to the first occurance in the s of any
* of the bytes in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}

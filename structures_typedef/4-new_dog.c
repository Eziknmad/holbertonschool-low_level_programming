#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string to count
*
* Return: length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
* _strcpy - copies a string to another buffer
* @dest: destination buffer
* @src: source string
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
*Return: pointer to new dog (dog_t), or NULL if fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	new_d->name = malloc(sizeof(char) * (name_len + 1));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	_strcpy(new_d->name, name);
	_strcpy(new_d->owner, owner);
	new_d->age = age;

	return (new_d);
}

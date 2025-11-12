#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints information about a dog
* @d: pointer to struct dog
*
* Return: void
*/
void print_dog(dog_t *d)
{
	if (d == NULL)
		return;

	printf("Dog's name: %s\n", d->name);
	printf("Dog's age: %.1f years\n", d->age);
	printf("Dog's owner: %s\n", d->owner);
}

#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
* print_dog - print s string dog
* @d: pointer to struct dog
*
* Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

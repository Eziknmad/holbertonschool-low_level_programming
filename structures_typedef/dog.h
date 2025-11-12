#ifndef DOG_H
#define DOG_H

/**
* struct dog - information about dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
*Description: Defines the structure for dog info
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Prototype of print_dog function */
void print_dog(dog_t *d);
/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif


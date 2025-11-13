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

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif


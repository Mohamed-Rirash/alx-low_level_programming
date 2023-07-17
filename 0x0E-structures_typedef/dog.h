#ifndef DOG_STRUCTURE
#define DOG_STRUCTURE

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a basic structure definition of a dog
 * @name: pointer to a string
 * @age: integer
 * @owner: pointer to a string
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_STRUCTURE */

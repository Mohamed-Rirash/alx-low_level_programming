#include "dog.h"

/**
 * init_dog - initialize a dog variable of type struct dog
 * @d: pointer to a dog struct
 * @name: pointer to a string to assigned the struct name attribute
 * @age: float variable
 * @owner: pointer to a string to assigned the struct owner attribute
 *
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


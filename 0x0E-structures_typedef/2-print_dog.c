#include "dog.h"

/**
 * print_dog - print a dog struct
 * @d: pointer to a dog struct
 *
 * Return: None
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
}


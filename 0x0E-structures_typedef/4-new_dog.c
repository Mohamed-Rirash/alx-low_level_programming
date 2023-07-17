#include "dog.h"

/**
 * new_dog - create a new dog data
 * @name: pointer to an array of string characters
 * @age: integer value
 * @owner: pointer to an array of string characters
 *
 * Return: pointer to struct data or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *n, *o;
	int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	n = malloc((i + 1) * sizeof(*n));
	if (n == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
		;
	o = malloc((i + 1) * sizeof(*o));
	if (o == NULL)
	{
		free(n), free(dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	n[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		o[i] = owner[i];
	o[i] = '\0';

	dog->name = n, dog->age = age, dog->owner = o;

	return (dog);
}


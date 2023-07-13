#include "main.h"

/**
 * malloc_checked - memory allocation
 * @b: memory size, unsigned int value
 *
 * Description: a function that allocates memory using malloc.
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}


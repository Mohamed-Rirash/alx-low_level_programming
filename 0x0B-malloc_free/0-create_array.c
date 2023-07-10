#include "main.h"
/**
 * create_array - create an array
 * @size: size of the array
 * @c: char to fill the array with
 *
 * Description: a function that creates an array of chars,
 * and initializes it with a specific char.
 * Return: pointer to an array of chars to a string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
		p[i++] = c;
	return (p);
}


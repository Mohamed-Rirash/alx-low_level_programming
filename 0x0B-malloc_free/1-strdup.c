#include "main.h"
/**
 * _strdup - copy a string
 * @str: string to be copied
 *
 * Description: a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * Return: NULL if s NULL or insufficent memory,
 * or a pointer to the newly copied string.
 */
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}


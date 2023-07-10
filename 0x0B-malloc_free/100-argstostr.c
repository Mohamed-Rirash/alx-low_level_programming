#include "main.h"
/**
 * argstostr - concatenate all arguments of a program
 * @ac: number of arguments
 * @av: pointer to an array of string pointers
 *
 * Return: NULL if ac == 0 or av == NULL
 * or memory fails, else return pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, total;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, total = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++, total++)
			;
	total += ac;
	p = malloc(total * sizeof(char) + 1);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*p++ = av[i][j];
		*p++ = '\n';
	}
	p -= total;
	return (p);
}


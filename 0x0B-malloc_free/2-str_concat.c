#include "main.h"
/**
 * str_concat - join strings together
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Description: a function that concatenates two strings.
 * Return: pointer to the new string or NULL of failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int l1 = 0, l2 = 0;
	char *p;

	if (s1 == NULL)
	{
		l1 = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			l1 += 1;
	}
	if (s2 == NULL)
	{
		l2 = 0;
	}
	else
	{
		for (i = 0; s2[i]; i++)
			l2 += 1;
	}
	p = malloc((l1 + l2) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	for (i = 0; i < l2; i++)
		p[l1 + i] = s2[i];
	p[l1 + i] = '\0';
	return (p);
}


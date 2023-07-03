#include "main.h"

/**
 * _strpbrk - search string
 * @s: the string to search
 * @accept: string containing characters to search for
 *
 * Description: a function that searches a string for any of a set of bytes
 * Return: a pointer to the byte in s that matches one ofthe bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = NULL;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j])
			{
				if ((p != NULL) && (&s[j] < p))
					p = &s[j];
				else if (p == NULL)
					p = &s[j];
			}
		}
	}
	return (p);
}


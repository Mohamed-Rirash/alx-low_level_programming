#include "main.h"

/**
 * _strchr - locate a character
 * @s: buffer to search, pointer to an array of characters, string
 * @c: charcter to search for
 *
 * Description: a function that locates a character in a string.
 * Return: pointer to the first search occurrence
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0, n = 0;

	for (i = 0; s[i]; i++)
		n++;

	for (i = 0; i <= n; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}


#include "main.h"

/**
 * _strlen - calculate string length
 * @s: string whose length is to be determined
 * Description: a function that returns the length of a string.
 *
 * Return: integer(sum of string characters)
 */
int _strlen(char *s)
{
	int i = 0, sum = 0;

	while (s[i] != '\0')
	{
		sum = sum + 1;
		i++;
	}
	return (sum);
}


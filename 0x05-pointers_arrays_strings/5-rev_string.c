#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reverse
 * Description: a function that reverses a string.
 *
 * Return: None
 */
void rev_string(char *s)
{
	int i = 0, x = 0, y;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > x)
	{
		y = s[i];
		s[i--] = s[x];
		s[x++] = y;
	}
}


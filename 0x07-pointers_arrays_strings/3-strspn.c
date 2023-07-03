#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Description: a function that gets the length of a prefix substring
 * Return: This function returns the number of characters in the
 * initial segment of s which consist only of characters  from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}

#include "main.h"

/**
 * string_nconcat - concatenate strings
 * @s1: pointer to start string
 * @s2: pointer to string to end string
 * @n: number of characters to add from str2 into str1
 *
 * Description: a function that concatenates two strings.
 * Return: NULL, if the function fails, else pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, c, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	if (n >= len2)
		n = len2;
	p = malloc(sizeof(*p) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (c = 0; c < n; c++)
		p[i + c] = s2[c];
	p[i + c] = '\0';
	return (p);
}


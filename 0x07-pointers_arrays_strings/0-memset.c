#include "main.h"
/**
 * _memset - memory fill
 * @s: buffer to fill, pointer to an array of charcters
 * @b: const char byte to used to fill
 * @n: n bytes to fill the buffer, s with const char b.
 *
 * Description: a function that fills memory with a constant byte.
 * Return: pointer to buffer, s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = &b;

	for (i = 0; i < n; i++)
	{
		s[i] = *p;
	}
	return (s);
}


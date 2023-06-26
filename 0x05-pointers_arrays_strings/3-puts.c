#include "main.h"

/**
 * _puts - print a string
 * @s: string parameter
 * Description: a function that prints a string, followed
 * by a new line, to stdout.
 *
 * Return: None
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}


#include "main.h"
/**
 * _puts_recursion - recursively print a string
 * @s: pointer to the string
 *
 * Description: a function that prints a string, followed by a new line
 * Return: None
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_putchar(s[i]);
		_puts_recursion(&s[++i]);
	}
	else
	{
		_putchar('\n');
	}
}


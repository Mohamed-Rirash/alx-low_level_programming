#include "main.h"
/**
 * _print_rev_recursion - reverse string
 * @s: pointer to the string
 *
 * Description: a function that prints a string in reverse.
 * Return: None
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_print_rev_recursion(&s[++i]);
		_putchar(s[--i]);
	}
}


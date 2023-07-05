#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: pointer to string
 *
 * Description: a function that returns the length of a string.
 * Return: integer, length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i])
		return (1 + _strlen_recursion(&s[++i]));
	else
		return (0);
}


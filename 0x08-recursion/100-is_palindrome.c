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

/**
 * palindrome - palindrome check
 * @s: pointer to a string
 * @i: forward integer
 * @l: backward integer
 *
 * Return: integer, 1 if string is a palindrome else 0
 */
int palindrome(char *s, int i, int l)
{
	if (s[i] == s[l])
	{
		if (i == l || (l - i == 1))
			return (1);
		else
			return (0 + palindrome(s, ++i, --l));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - palindrome check
 * @s: pointer to string
 *
 * Description: a function that returns 1 if a string is a palindrome else 0
 * Return: integer, 1 if string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s), r;

	r = palindrome(s, 0, --l);
	return (r);
}


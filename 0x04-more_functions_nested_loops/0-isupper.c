#include "main.h"
/**
 * _isupper - checks for uppercase character
 *@c: the character to check
 * Description: a function that checks for uppercase character.
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


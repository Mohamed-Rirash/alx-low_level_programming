#include "main.h"
/**
 * _isdigit - digit checker
 * @c: character to valid
 * Description: a function that checks for a digit (0 through 9).
 * Return: 1 if c is a digit between 0 and 9, else 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


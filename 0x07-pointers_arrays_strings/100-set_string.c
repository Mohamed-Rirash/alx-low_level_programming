#include "main.h"

/**
 * set_string - set the value of a pointer
 * @s: pointer to a pointer
 * @to: pointer to a character variable
 *
 * Description: a function that sets the value of a pointer to a char
 * Return: None
 */
void set_string(char **s, char *to)
{
	*s = to;
}


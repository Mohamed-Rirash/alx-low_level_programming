#include "function_pointers.h"

/**
 * print_name - print a name string
 * @name: pointer to a string of characters
 * @f: pointer to a function
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}


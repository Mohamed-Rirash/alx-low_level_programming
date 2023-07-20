#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: pointer to a string
 * @n: integer, number of strings
 * @...: list of string arguments
 *
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *s;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(p);
}


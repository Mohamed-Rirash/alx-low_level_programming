#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a string seperator
 * @separator: pointer to a string on character(s)
 * @n: integer, number of arguments
 * @...: list of integer variables
 *
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(p);
}


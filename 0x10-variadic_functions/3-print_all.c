#include "variadic_functions.h"

/**
 * print_char - print character
 * @p: pointer to a char
 * Return: None
 */
void print_char(va_list p)
{
	printf("%c", (char) va_arg(p, int));
}


/**
 * print_integer - print integer
 * @p: pointer to an int
 * Return: None
 */
void print_integer(va_list p)
{
	printf("%i", va_arg(p, int));
}


/**
 * print_float - print float
 * @p: pointer to a float
 * Return: None
 */
void print_float(va_list p)
{
	printf("%f", va_arg(p, double));
}


/**
 * print_string - print string
 * @p: pointer to a string of characters
 * Return: None
 */
void print_string(va_list p)
{
	char *s = va_arg(p, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - a function that prints anything.
 * @format: array of charcter formats
 * Return: None
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list p;
	actions options[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};
	char *separator = "";

	va_start(p, format);
	i = 0;
	while (format && *(format + i))
	{
		j = 0;
		while (j < 4 && *(format + i) != options[j].s[0])
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			options[j].f(p);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(p);
}


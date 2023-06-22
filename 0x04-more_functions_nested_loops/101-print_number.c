#include "main.h"
/**
 * print_number - print integer
 * @n: integer to print
 * Description: a function that prints an integer.
 * - You can only use _putchar function to print
 * - You are not allowed to use long
 * - You are not allowed to use arrays or pointers
 * - You are not allowed to hard-code special values
 * Return: None
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}

	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}


#include "main.h"
/**
 * print_numbers - output digits
 * Description: a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: None
 */
void print_numbers(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

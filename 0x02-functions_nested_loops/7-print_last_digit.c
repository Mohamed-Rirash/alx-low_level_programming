#include "main.h"
/**
  * print_last_digit -Print last digit of an integer
  * @n: integer
  * Description: a function that prints the last digit of a number.
  *
  * Return: value of the last digit of n
  */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}

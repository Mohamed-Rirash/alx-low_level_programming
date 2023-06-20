#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print the times table until n
 * @n: n times table to be printed
 * Description: a function that prints the n times table, starting with 0.
 * Return: none (void)
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				x = i * j;
				if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar(((x % 100) / 10) + '0');
					_putchar(((x % 100) % 10) + '0');
				}
				else if (x >= 10)
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				}
			}
			_putchar('\n');
		}
	}
}


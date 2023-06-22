#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: number of times to print '\'
 * Description: a function that draws a diagonal line on the terminal.
 * Return: None
 */
void print_diagonal(int n)
{
	int m, x;

	if (n > 0)
	{
		x = 1;
		while (x <= n)
		{
			if (x > 1)
			{
				m = x - 1;
				while (m)
				{
					_putchar(' ');
					m--;
				}
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}


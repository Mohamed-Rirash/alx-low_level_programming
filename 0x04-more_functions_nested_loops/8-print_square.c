#include "main.h"
/**
 * print_square - print a square
 * @size: integer value of the square size
 * Description: a function that prints a square, followed by a new line.
 * Return: None
 */
void print_square(int size)
{
	int x, y;

	x = 1;
	if (size > 0)
	{
		while (x <= size)
		{
			y = 1;
			while (y <= size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}


#include "main.h"
/**
 * more_numbers - print numbers
 * Description: a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: None
 */
void more_numbers(void)
{
	int n, m;

	n = 1;
	while (n <= 10)
	{
		m = 0;
		while (m <= 14)
		{
			if (m > 9)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
			m++;
		}
		_putchar('\n');
		n++;
	}
}


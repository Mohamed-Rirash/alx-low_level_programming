#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - natural numbers between n and 98
 *
 * @n: integer to start at
 *
 * Description: a function that prints all natural numbers from n to 98,
 * - followed by a new line.
 *
 * Return: void.
 */

void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i <= 98 ; i++)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	putchar('\n');
}


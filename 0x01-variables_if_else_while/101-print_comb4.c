#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints all possible
  * different combinations of three digits.
  *
  * Conditions:
  * Numbers must be separated by ,, followed by a space,
  * The three digits must be different,
  * 012, 120, 102, 021, 201, 210 are considered
  * the same combination of the three digits 0, 1 and 2,
  * Print only the smallest combination of three digits,
  * Numbers should be printed in ascending order, with three digits,
  * You can only use the putchar function
  * (every other function (printf, puts, etc…) is forbidden),
  * You can only use putchar six times maximum in your code,
  * You are not allowed to use any variable of type char,
  * All your code should be in the main function.
  *
  * Return: Always 1 (success)
  */
int main(void)
{
	int x, y, z;

	x = 0;
	y = 1;
	z = 2;
	while (x < 8)
	{
		while (y < 9)
		{
			while (z <= 9)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x == 7 && y == 8 && z == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x + 1;
		z = x + 2;
	}
	return (0);
}

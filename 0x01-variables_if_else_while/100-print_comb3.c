#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints all possible different combinations
  * of two digits.
  *
  * Conditions:
  * Numbers must be separated by ,, followed by a space,
  * The two digits must be different,
  * 01 and 10 are considered the same combination of the two digits 0 and 1,
  * Print only the smallest combination of two digits,
  * Numbers should be printed in ascending order, with two digits,
  * You can only use the putchar function (every other function
  * (printf, puts, etc…) is forbidden),
  * You can only use putchar five times maximum in your code,
  * You are not allowed to use any variable of type char,
  * All your code should be in the main function.
  * Return: Always 1 (success)
  */
int main(void)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x < 9)
	{
		while (y <= 9)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 8 && y == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
		y = x + 1;
	}
	return (0);
}

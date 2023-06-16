#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints all possible
  * combinations of two two-digit numbers.
  *
  * Conditions:
  * The numbers should range from 0 to 99,
  * The two numbers should be separated by a space,
  * All numbers should be printed with two digits. 1 should be printed as 01
  * The combination of numbers must be separated by comma, followed by a space,
  * The combinations of numbers should be printed in ascending order,
  * 00 01 and 01 00 are considered as the same combination of the numbers 0 & 1
  * You can only use the putchar function
  * (every other function (printf, puts, etc…) is forbidden),
  * You can only use putchar eight times maximum in your code,
  * You are not allowed to use any variable of type char,
  * All your code should be in the main function.
  *
  * Return: Always 1 (success)
  */
int main(void)
{
	int x, y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x == 98 && y == 99)
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
	}
	return (0);
}

#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints all possible combinations of
  * single-digit numbers.
  *
  * Conditions:
  * Numbers must be separated by ,, followed by a space,
  * Numbers should be printed in ascending order,
  * You can only use the putchar function (every other function
  * (printf, puts, etc…) is forbidden),
  * All your code should be in the main function,
  * You can only use putchar four times maximum in your code,
  * You are not allowed to use any variable of type char.
  *
  * Return: Always 1 (success)
  */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		i++;
	}
	return (0);
}

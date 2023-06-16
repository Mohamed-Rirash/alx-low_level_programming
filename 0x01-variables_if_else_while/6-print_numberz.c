#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints all single digit numbers of base 10
  * starting from 0, followed by a new line.
  * Conditions:
  * You are not allowed to use any variable of type char,
  * You can only use the putchar function (every other function
  * (printf, puts, etc…) is forbidden),
  * You can only use putchar twice in your code,
  * All your code should be in the main function.
  * Return: Always 1 (success)
  */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i == 9)
			putchar('\n');
		i++;
	}
	return (0);
}

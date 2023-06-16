#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints all the numbers of base 16 in
  * lowercase, followed by a new line.
  *
  * Conditions:
  * You can only use the putchar function (every other function
  * (printf, puts, etc…) is forbidden),
  * All your code should be in the main function,
  * You can only use putchar three times in your code.
  *
  * Return: Always 1 (success)
  */
int main(void)
{
	int i;
	char c;

	i = 0;
	c = 'a';
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		if (c == 'f')
			putchar('\n');
		c++;
	}
	return (0);
}


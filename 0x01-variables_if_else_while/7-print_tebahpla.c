#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints the lowercase alphabet in reverse,
  * followed by a new line.
  *
  * Condition:
  * You can only use the putchar function (every other function
  * (printf, puts, etc…) is forbidden),
  * All your code should be in the main function,
  * You can only use putchar twice in your code,
  *
  * Return: Always 1 (success)
  */
int main(void)
{
	char r;

	r = 'z';
	while (r >= 'a')
	{
		putchar(r);
		if (r == 'a')
			putchar('\n');
		r--;
	}
	return (0);
}

#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints the alphabet in lowercase,
  * and then in uppercase, followed by a new line.
  * Return: Always 0 (success)
  */
int main(void)
{
	char low, up;

	low = 'a';
	up = 'A';
	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		if (up == 'Z')
			putchar('\n');
		up++;
	}
	return (0);
}

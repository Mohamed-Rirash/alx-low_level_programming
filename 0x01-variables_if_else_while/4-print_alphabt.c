#include <stdio.h>
/**
  * main - Entry point
  *
  * Descrition - a program that prints the alphabet in lowercase,
  * followed by a new line.
  * Return: Always 0 (success)
  */
int main(void)
{
	char low;

	low = 'a';
	while (low <= 'z')
	{
		if ((low != 'q') && (low != 'e'))
			putchar(low);
		if (low == 'z')
			putchar('\n');
		low++;
	}
	return (0);
}

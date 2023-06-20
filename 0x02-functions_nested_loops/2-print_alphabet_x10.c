#include "main.h"
/**
  * print_alphabet_x10 - alphabet loop
  *
  * Description: a function that prints 10 times the alphabet, in lowercase,
  * - followed by a new line.
  *
  * Return: no return value
  */
void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}


#include "main.h"
/**
  * main - Entry point
  *
  * Description - a program that prints _putchar, followed by a new line.
  * - The program should return 0
  *
  * Return: 0 (success)
  */
int main(void)
{
	char c[10] = "_putchar";
	int i;

	i = 0;
	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}


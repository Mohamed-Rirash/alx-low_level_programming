#include "main.h"

/**
 * puts_half - half a string
 * @str: string whose half is to be printed
 * Description: a function that prints half of a string, followed by a new line
 *
 * Return: None
 */
void puts_half(char *str)
{
	int i = 0, len = 0, j;

	while (str[i++])
		len++;
	if ((len % 2) == 0)
		j = len / 2;
	else
		j = (len / 2) + 1.5;
	while (str[j])
		_putchar(str[j++]);
	_putchar('\n');
}


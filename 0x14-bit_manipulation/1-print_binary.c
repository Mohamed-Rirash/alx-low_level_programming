#include "main.h"

/**
 * print_binary - print the binary value of an integer
 * @n: unsigned long integer
 *
 * Description:
 * - You are not allowed to use arrays
 * - You are not allowed to use malloc
 * - You are not allowed to use the % or / operators
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for ( ; shifts >= 0; shifts--)
		((n >> shifts) & 1 ? _putchar('1') : _putchar('0'));
}


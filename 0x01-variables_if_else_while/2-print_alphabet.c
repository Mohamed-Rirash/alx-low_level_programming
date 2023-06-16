#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints the alphabet in lowercase,
  * followed by a new line.
  * Return: Always 1 (success)
  */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		if (alphabet == 'z')
			putchar('\n');
		alphabet++;
	}
	return (0);
}

#include <stdio.h>
/**
  * main - Entry point
  *
  * Description - a program that prints all single digit numbers
  * of base 10 starting from 0, followed by a new line.
  * Return: Always 1 (success)
  */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		if (i == 9)
			printf("\n");
		i++;
	}
	return (0);
}

#include <stdio.h>
/**
 * main - fibonacci 50
 *
 * Description: a program that prints the first 50 Fibonacci numbers,
 * - starting with 1 and 2, followed by a new line.
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;

	printf("%lu", bef);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	printf("\n");
	return (0);
}


#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that finds and prints the sum of the
 * - even-valued terms, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int lim = 4000000;
	unsigned long int bef = 0;
	unsigned long int aft = 1;
	unsigned long int R = 0;
	unsigned long int sum = 0;

	while (lim > R)
	{
		R = bef + aft;
		if ((R % 2) == 0)
		{
			sum += R;
		}
		bef = aft;
		aft = R;
	}
	printf("%li\n", sum);
	return (0);
}


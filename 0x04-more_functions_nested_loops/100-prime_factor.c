#include <stdio.h>
#include <math.h>
/**
 * main - prime factor
 * Description: a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	long int n, max, i;

	n = 612852475143;
	max = -1;
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	i = 3;
	while (i <= sqrt(n))
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
		i += 2;
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}


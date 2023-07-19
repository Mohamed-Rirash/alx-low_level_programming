#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: integer, number of program arguments
 * @argv: array of pointers to strings
 *
 * Return: print opcodes in hexadecimal lowercase,
 * print 'Error' if arguments != 2 and if number of bytes given is negative
 */
int main(int argc, char *argv[])
{
	int i, n;


	if (argc != 2)
		printf("Error\n"), exit(1);

	n = atoi(argv[1]);

	if (n < 0)
		printf("Error\n"), exit(2);

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i == n - 1)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}


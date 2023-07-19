#include "3-calc.h"

/**
 * main - operate on program arguments
 * @argc: integer, number of arguments passed
 * @argv: array of pointers to an array of strings
 *
 * Return: integer, result of opertaion,
 * Error or NULL if given an invalid argument
 */
int main(int argc, char **argv)
{
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));

	return (0);
}


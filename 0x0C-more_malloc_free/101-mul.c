#include "main.h"

/**
 * printError - print error message
 * @error: pointer to string, messgage to display
 *
 * Return: None, exit status = 98.
 */
void printError(char *error)
{
	int i;

	for (i = 0; error[i] != '\0'; i++)
		_putchar(error[i]);
	exit(98);
}

/**
 * checkInput - count argument given
 * @argc: number of arguments, integer
 * @error: pointer to string, error message.
 *
 * Return: None, exit status = 98, if argc < || > 3
 */
void checkInput(int argc, char *error)
{
	if (argc != 3)
		printError(error);
}

/**
 * validateInput - check if input contains integers only
 * @argv: pointer to an array of pointers to array
 * @error: pointer to error message
 *
 * Return: None, exit status = 98, if failed
 */
void validateInput(char **argv, char *error)
{
	int i, j;

	for (i = 1; *(argv + i); i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				printError(error);
		}
	}
}

/**
 * getNumericValue - char to integer
 * @s: char variable
 *
 * Return: integer
 */
int getNumericValue(char s)
{
	return (s - '0');
}

/**
 * zero - initialize elements to 0
 * @p: pointer to array of integer
 * @length: length of array, integer
 *
 * Return: None
 */
void zero(int *p, int length)
{
	int i;

	for (i = 0; i < length; i++)
		p[i] = 0;
}

/**
 * _strlen - length of string
 * @s: pointer to string
 *
 * Return: integer, length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * join - join two strings of integers together
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @len1: length of string 1
 * @len2: length of string 2
 * @length: total length of new memory
 *
 * Return: pointer to allocated memory
 */
int *join(char *s1, char *s2, int len1, int len2, int length)
{
	int i, *p;

	p = malloc(length * sizeof(*p));
	if (p == NULL)
	{
		free(p);
		exit(1);
	}
	for (i = 0; i < len1 && s1[i] != '\0'; i++)
		p[i] = getNumericValue(s1[i]);
	for (i = 0; i < len2 && s2[i] != '\0'; i++)
		p[len1 + i] = getNumericValue(s2[i]);
	return (p);
}

/**
 * array - multiply integers and store them in a grid
 * @p: pointer to intgers
 * @grid: pointer to grid
 * @len1: width determinant, integer
 * @len2: height of grid, integer
 * @length: width of grid, integer
 *
 * Return: None
 */
void array(int *p, int **grid, int len1, int len2, int length)
{
	int i, j, x, k = 0;
	int value = 0, remainder = 0, product = 0;

	for (i = 0; i < len2; i++)
	{
		grid[i] = malloc(length * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for ( ; i >= 0; )
				free(grid[i]);
			free(grid), free(p);
			exit(1);
		}
		zero(grid[i], length);
		k = length - 1 - i;
		for (j = len1 - 1, x = 0; j >= 0; j--, x++)
		{
			product = (p[j] * p[k]) + remainder;
			remainder = product / 10;
			value = product % 10;
			grid[i][k - x] = value;
			if (j == 0 && remainder)
				grid[i][k - x - 1] = remainder;
		}
		remainder = 0;
	}
	free(p);
}

/**
 * add - sum grid column
 * @out: pointer to memory of final result
 * @grid: pointer to grid
 * @len2: grid height
 * @length: grid width
 *
 * Return: None
 */
void add(int *out, int **grid, int len2, int length)
{
	int i, j, sum;
	int value = 0, remainder = 0;

	for (i = length - 1; i >= 0; i--)
	{
		sum = 0;
		for (j = 0; j < len2; j++)
			sum += grid[j][i];
		sum += remainder;
		value = sum % 10;
		remainder = sum / 10;
		out[i] = value;
	}

	for (i = len2 - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}

/**
 * output - print final result
 * @out: pointer to array of integers
 * @length: length of array
 *
 * Return: None
 */
void output(int *out, int length)
{
	int i, l = 0;

	for (i = 0; i < length; i++)
	{
		if (out[i] == 0 && l == 0)
			continue;
		_putchar((char) out[i] + '0');
		l++;
	}
	if (l == 0)
		_putchar('0');
	_putchar('\n');
	free(out);
	exit(0);
}

/**
 * main - a program that multiplies two positive numbers.
 * @argc: integer, number of arguments
 * @argv: pointer to an array of pointers to strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	char *s1 = *(argv + 1);
	char *s2 = *(argv + 2), *error = "Error\n";
	int *p, *out, **grid;
	int len1 = 0, len2 = 0, length = 0;

	checkInput(argc, error);
	validateInput(argv, error);
	len1 = _strlen(s1), len2 = _strlen(s2);
	length = len1 + len2;
	p = join(s1, s2, len1, len2, length);
	grid = malloc(len2 * sizeof(*grid));
	if (grid == NULL)
	{
		free(grid), free(p);
		exit(1);
	}
	array(p, grid, len1, len2, length);
	out = malloc(length * sizeof(*out));
	if (out == NULL)
	{
		free(out), free(grid);
		exit(1);
	}
	add(out, grid, len2, length);
	output(out, length);
	return (0);
}


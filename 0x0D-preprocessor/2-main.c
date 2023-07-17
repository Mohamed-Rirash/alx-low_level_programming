#include <stdio.h>

/**
 * main - print file name
 * Description: a program that prints the name of the file
 * it was compiled from, followed by a new line.
 * Return: None
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

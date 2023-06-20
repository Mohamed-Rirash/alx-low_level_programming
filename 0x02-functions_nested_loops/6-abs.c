#include "main.h"
/**
  * _abs - Output absolute value of an integer
  * @n: parameter must be an integer value
  *
  * Description: a function that computes the absolute value of an integer.
  *
  * Return: the absolute value of n
  */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

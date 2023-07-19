#include "3-calc.h"

/**
 * get_op_func - get function based on operator
 * @s: character, operator to determine the chosen function
 *
 * Description: function that selects the correct function to perform the
 * operation asked by the user.
 * Return: pointer to a function, or NULL if s is invalid
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	unsigned long int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}


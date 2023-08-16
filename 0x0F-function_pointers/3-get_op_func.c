#include "3-calc.h"

/**
 * get_op_func - gets the correct function for an operator
 * @s: operator to get correct function for
 *
 * Return: NULL if no match found, otherwise pointer to correct func
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
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}


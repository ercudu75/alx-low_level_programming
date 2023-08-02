#include "main.h"

/**
 * _pow_recursion - Calculates the value of x^y recursively.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The result of x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}



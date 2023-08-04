#include "main.h"
/**
 * _sqrt_recursion - Calculates square root of a number
 * @n: The input number.
 *
 * Return: The natural square root of the number, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	return _sqrt(n, 1);
}
/**
 * _sqrt - Helper function to recursively find the square root.
 * @n: The input number.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of the number, or -1 if not found.
 */
int _sqrt(int n, int i)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return _sqrt(n, i + 1);
}

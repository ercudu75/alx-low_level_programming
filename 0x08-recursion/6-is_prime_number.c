#include "main.h"
/**
 * is_prime_number - Calculates square root of a number
 * @n: The input number.
 *
 * Return: The natural square root of the number, or -1 if not found.
 */
int is_prime_number(int n)
{
	return is_prime(n, 1);
}
/**
 * _sqrt - Helper function to recursively find the square root.
 * @n: The input number.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of the number, or -1 if not found.
 */
int is_prime(int n, int i)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (0);
	}
	if (i * i == n)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return is_prime(n, i + 1);
}

#include "main.h"
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input number.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
/**
 * is_prime - Helper function to check if a number is prime.
 * @n: The input number.
 * @i: The current divisor to check.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime(int n, int i)
{
	if (n <= 1)
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
	return (is_prime(n, i + 1));
}

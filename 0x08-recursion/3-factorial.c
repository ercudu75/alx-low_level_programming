#include "main.h"
/**
 * factorial - Calculates the factorial of a given number.
 * @n: The input number.
 *
 * Return: The factorial of the number, or -1 for negative input.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
/**
 * factorial(5) - Calculates the factorial of a number recursively.
 *
 * Explanation of Factorial Calculation:
 *
 * factorial(5) = 5 * factorial(4)
 * factorial(4) = 4 * factorial(3)
 * factorial(3) = 3 * factorial(2)
 * factorial(2) = 2 * factorial(1)
 * factorial(1) = 1
 * factorial(2) = 2 * 1 = 2
 * factorial(3) = 3 * 2 = 6
 * factorial(4) = 4 * 6 = 24
 * factorial(5) = 5 * 24 = 120
 */


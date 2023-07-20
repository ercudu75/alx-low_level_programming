#include "main.h"
/**
 * print_diagonal - Entry point
 * Description: Draws a diagonal line on the terminal using the character '\'.
 *
 * @n: The number of times the character '\' should be printed
 * to create the diagonal.
 *     If n is 0 or less, the function only prints a new line ('\n').
 *
 * Return: void (no return value)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

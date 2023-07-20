#include "main.h"
/**
 * print_line - Entry point
 * Description: Draws a straight line in the terminal using the character '_'.
 *
 * @n: The number of times the character '_' should be printed.
 *     If n is 0 or less, the function only prints '\n'.
 *
 * Return: void (no return value)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

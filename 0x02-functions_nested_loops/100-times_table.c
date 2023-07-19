#include "main.h"
/**
 * print_times_table - Entry point
 * Descrption: If n is greater than 15 or less than 0 the function
 *	should not print anything
*/
void print_times_table(int n)
{
	int i, j, r;

	for (i = 0; i <= n; i++)
	{
		for (j = 0 ; j <= n; j++)
		{
			r = i * j;

		if (r == 0)
		{
			_putchar(r + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(r + '0');
		}
		_putchar('\n');
		}
	}
}

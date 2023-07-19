#include "main.h"
/**
 * print_times_table - Entry point
 * @n: The number to generate the times table for.
 * Descrption: If n is greater than 15 or less than 0
*/
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int i, j, r;

	for (i = 0; i <= n; i++)
	{
		for (j = 0 ; j <= n; j++)
		{
			r = i * j;

		if (j != 0)
		{
			_putchar(',');
			_putchar(' ');
					if (r < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(r + '0');
					}
					else if (r < 100)
					{
						_putchar(' ');
						_putchar(r / 10 + '0');
						_putchar(r % 10 + '0');
					}
					else
					{
						_putchar(r / 100 + '0');
						_putchar((r / 10) % 10 + '0');
						_putchar(r % 10 + '0');
					}
		}
		else
			_putchar(r + '0');
		}
		_putchar('\n');
	}
	}
}

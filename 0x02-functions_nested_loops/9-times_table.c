#include "main.h"
/**
 * times_table - Prints the 9 times table.
 *
 * Description: This function prints the multiplication table for the number 9,
 * starting from 0, up to 9 times 9.
 */
void times_table(void)
{
	int n, j, i;

	while (n <= 9)
	{
		n = 0;
		for (i = 0; i <= 9; i++)
		{
			j = n * i;
			_putchar(j);
			_putchar(', ');
		}
		_putchar('\n');
		n++;
	}
}

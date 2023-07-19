#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all the natural numbers from the starting
 *              number (n) up to 98. The numbers are separated by a comma and
 *              space, and they are printed in ascending order.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			}
		}
	}
	else 
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i / 100 + '0');

				_putchar(i % 100 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
			_putchar(i / 100 + '0');
			_putchar(i % 10 + '0');
			}
		}	
	}
}
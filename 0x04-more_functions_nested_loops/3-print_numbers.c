#include "main.h"
/**
 * print_numbers - entry point
 * Description: function that prints the numbers
 *
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

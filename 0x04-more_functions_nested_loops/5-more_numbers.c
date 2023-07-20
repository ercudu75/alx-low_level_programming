#include "main.h"
/**
 * more_numbers - Entry point
 * Description: Prints 10 sets of numbers from 0 to 14, followed by a new line.
 *              Each set is repeated 10 times.
 *
 * Return: void (no return value)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
			_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

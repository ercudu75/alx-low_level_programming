#include "main.h"
/**
 * print_square - Prints a square using the character '#'.
 *
 * @size: The size of the square.
 *        If size is 0 or less, the function only prints a new line ('\n').
 *
 * Return: void (no return value)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

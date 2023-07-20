#include "main.h"

/**
 * print_triangle - Prints a triangle using the character '#'.
 *
 * @size: The size of the triangle to be printed.
 *        If size is 0 or less, it will print only a new line.
 *
 * Return: void (No return value)
 *
 * Description:
 * Function that prints a triangle, followed by a new line.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


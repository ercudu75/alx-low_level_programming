#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all the natural numbers from the starting
 *					number (n) up to 98.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
		{
			printf("%d, ", i);
		}
		else
			printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
		{
			printf("%d, ", i);
		}
		else
			printf("%d\n", i);
		}
	}
	else
	printf("%d\n", n);
}

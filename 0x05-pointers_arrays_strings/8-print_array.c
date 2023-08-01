#include "main.h"
#include<stdio.h>
/**
 * print_array - Prints the elements of an integer array followed by a newline.
 * @a: Pointer to the integer array.
 * @n: The number of elements in the array.
 * Description:  prints n elements of an array of integers
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	printf("%d,", a[0]);
	for (i = 1; i < n; i++)
	{
		if (a[i] != a[n - 1])
		{
			printf(" %d,", a[i]);
		}
		else
		{
			printf(" %d", a[n - 1]);
		}
	}
	printf("\n");
}

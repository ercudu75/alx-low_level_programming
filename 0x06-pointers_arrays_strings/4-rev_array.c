#include "main.h"
/**
 * reverse_array - Entry point
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 *
 * Description: This function reverse abd array
 *
 * Return: void (no explicit return).
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i <= (n / 2) - 1 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

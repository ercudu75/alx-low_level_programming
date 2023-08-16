#include "function_pointers.h"
#include<stdlib.h>

/**
 * int_index - gets the index of an array element
 * @array: array to search through
 * @size: size of array (num of elements)
 * @cmp: comparison function to determine if element found
 *
 * Return: integer representing index of element found in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);

	}
	return (-1);
}

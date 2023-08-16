#include "function_pointers.h"
#include<stdlib.h>
/**
 * array_iterator - iterates over an array and performs an action on it
 * @array: array to iterate through
 * @size: number of elements of array
 * @action: action (function) to perform on array elements
 *
 * Return: always void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

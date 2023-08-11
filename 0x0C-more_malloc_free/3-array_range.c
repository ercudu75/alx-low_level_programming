#include "main.h"
#include<stdlib.h>

/**
 * array_range - Creates an array
 * @min: Minimum value of the range
 * @max: Maximum value of the range
 *
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (min = 0; min <= max; min++)
		ptr[i++] = min;

	return (ptr);
}

#include "main.h"
#include<stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array
 * @width: The width (number of columns) of the 2D array.
 * @height: The height (number of rows) of the 2D array.
 *
 * Return: Pointer to the newly allocated 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 && height <= 0)
		return (NULL);


	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

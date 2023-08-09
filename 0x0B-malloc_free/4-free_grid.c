#include "main.h"
#include<stdlib.h>
/**
 * free_grid - Frees the memory used by a 2D grid.
 * @grid: Pointer to the 2D grid.
 * @height: Height (number of rows) of the grid.
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

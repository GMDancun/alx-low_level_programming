#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: pointer to 2d grid
 * @height: height of the grid
 *
 *
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}


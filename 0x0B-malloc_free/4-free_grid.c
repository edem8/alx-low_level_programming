#include "main.h"

/**
 * free_grid - free the 2D grid
 * @grid: double pointer grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

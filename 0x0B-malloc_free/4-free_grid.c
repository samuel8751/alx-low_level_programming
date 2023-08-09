#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid function.
 * @grid: The 2D grid to be freed
 * @height: The height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}


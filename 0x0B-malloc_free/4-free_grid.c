#include "main.h"

/**
 * free_grid - Frees a malloc
 * @grid: the grid
 * @height: given height
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}

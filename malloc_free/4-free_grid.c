#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: array
 * @height: the heught of grid
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);

	free(grid);
}

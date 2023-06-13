#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid
 * @height: int
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	for (; n < height; n++)
		free(grid[n]);

	free(grid);
}

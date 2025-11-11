#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid
 *				previously created.
 * @grid: Pointer to the 2D grid to free.
 * @height: Number of rows in the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

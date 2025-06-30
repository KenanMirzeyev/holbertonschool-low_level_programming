#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - grid
 * @grid: grid
 * @height: height
 *
 * Return: S
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
	{
		return;
	}
	for (a = 0 ; a < height ; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

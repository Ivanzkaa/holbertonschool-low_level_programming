#include "main.h"
#include <stdlib.h>
/**
 * free_grid - freeing the grid
 * @grid: grid
 * @height: height
 * Return: void
 **/
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

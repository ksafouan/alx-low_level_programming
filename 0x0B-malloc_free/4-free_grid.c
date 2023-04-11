#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that free a 2D array previosly created
 * @grid: pointer in int
 * @height: input int
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}

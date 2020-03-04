#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 *@grid: grid with allocated memory
 *@height: number of pointers in **grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int column;

	for (column = 0; column < height; column++)
	{
		free(grid[column]);
	}
	free(grid);
}

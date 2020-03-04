#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	int row, column;

	/*Allocate memory for gird*/
	grid = malloc(sizeof(int*) * height);
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
	}

	/*Verify malloc was successful*/
	if (grid == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			grid[row][column] = 0;
		}
	}

	return (grid);
}

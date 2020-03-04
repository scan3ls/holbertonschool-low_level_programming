#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: dimension of the array
 *@height: dimension of the array
 *
 * Return: 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row, column;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*Allocate memory for gird*/
	grid = malloc(sizeof(int *) * height);
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
	}

	/*Verify malloc was successful*/
	if (grid == NULL)
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

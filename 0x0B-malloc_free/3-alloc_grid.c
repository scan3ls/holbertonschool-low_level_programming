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

	/*Allocate memory for pointers*/
	grid = malloc(sizeof(int *) * height);
	/*Verify malloc was successful*/
	if (grid == NULL)
	{
		return (NULL);
	}

	/*Allocate memory for values of the grid*/
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
	}
	/*Verify malloc was successful*/
	for (row = 0; row < height; row++)
	{
		if (grid[row] == NULL)
		{
			return (NULL);
		}
	}

	/*Populate grid with value of zero*/
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			grid[row][column] = 0;
		}
	}

	return (grid);
}

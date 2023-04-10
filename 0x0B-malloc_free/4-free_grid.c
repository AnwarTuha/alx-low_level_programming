#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously
*			  created by the alloc_grid function
*
* @grid: 2D array created by alloc_grid
* @height: height to be freed from given grid
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

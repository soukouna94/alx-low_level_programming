#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function free memory for 2d array
 * @grid: 2d array of integer
 * @height: integer
 * Description: this function free memory for 2d array
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}

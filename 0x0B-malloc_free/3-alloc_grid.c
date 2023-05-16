#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array based on height/width
 * @width: integer
 * @height: integer
 * Description: Creates a 2d array based on heightt/width
 * Return: A pointer to the address of the 2d array
 */
int **alloc_grid(int width, int height)
{
	int h, w, i, **array;
	int size = width * height;

	if (size <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc((sizeof(int) * size) + 1);
	for (h = 0; h < height; h++)
	{
		array[h] = (int *)malloc((sizeof(int) + height) + 1);
		if (array[h] == NULL)
		{
			i = h;
			for (i--; i < h; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
	for (h = 0; h < height; w++)
	{
		for (w = 0; w < width; h++)
		{
			array[h][w] = 0;
		}
	}
	return (array);
}

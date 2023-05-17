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
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{	free(array);

		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		array[h] = (int *)malloc(sizeof(int) * width);
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
	for (h = 0; h < height; h++)
	{	array[h] = (int *)malloc(sizeof(int) * width);
		for (w = 0; w < width; w++)
		{
			array[h][w] = 0;
		}
	}
	return (array);
}

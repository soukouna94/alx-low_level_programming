#include "main.h"
#include "stdlib.h"

/**
 * array_range - create an array of integers from min to max
 * @min: int
 * @max: int
 * Description: Creates an array of integers from min to max
 * Return: a pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *array;
	int i, arraySize;

	if (min > max)
	{
		return (NULL);
	}
	arraySize = (max - min + 1);
	array = malloc(sizeof(int) * arraySize);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < arraySize; i++)
	{
		array[i] = min + i;
	}
	return (array);
}

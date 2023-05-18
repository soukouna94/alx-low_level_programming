#include "main.h"
#include "stdlib.h"

/**
 * _calloc - create an array using malloc
 * @nmemb: int repr number of elements of array
 * @size: int repr size of the array in bytes
 * Description: Creates an array using malloc
 * Return: a pointer to the allocaed memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(1 * size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}
	return (array);
}

#include "main.h"
#include "stdlib.h"

/**
 * create_array - create an array of characters
 * @size: int
 * @c: char
 * Description: Creates an array of characters
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

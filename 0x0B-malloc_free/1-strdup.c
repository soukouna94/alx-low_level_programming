#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string and share its memory address
 * @str: character
 * Description: Copy a string and share its memory address
 * Return: A pointer to the memory area str
 */
char *_strdup(char *str)
{
	char *duplicate;

	int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	duplicate = (char *)malloc((sizeof(char) * size) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[size] = '\0';

	return (duplicate);
}

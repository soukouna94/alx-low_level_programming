#include "main.h"

/**
 * _strncpy - Copy a string with at most n bytes
 * @dest: string where the copy will be saved
 * @src: string which will be copied
 * @n: integer representing the max number of bytes
 * Description: Copy a string with at most n bytes
 * Return: Pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

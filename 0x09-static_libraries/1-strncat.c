#include "main.h"

/**
 * _strncat- concatenate two strings with at most n bytes
 * @dest: string which will be used to append
 * @src: string which will be appended
 * @n: number of bytes from src
 * Description: Concatenate two strings with at most n bytes
 * Return: A pointer to the concatenated String
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

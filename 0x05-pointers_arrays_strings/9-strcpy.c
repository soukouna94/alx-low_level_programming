#include "main.h"

/**
 * _strcpy - String copy
 * @dest: destination character
 * @src: source character
 * Description: String copy from src to dest
 * Return: The pointer to des
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

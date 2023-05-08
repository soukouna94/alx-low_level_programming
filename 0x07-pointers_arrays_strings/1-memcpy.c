#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: memory area which will be copied
 * @dest: memory area which the copy will be saved
 * @n: number of bytes from src
 * Description: Copies n bytes from memory and save it
 * Return: A pointer to the dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

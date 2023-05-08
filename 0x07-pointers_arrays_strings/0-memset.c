#include "main.h"

/**
 * _memset - fills the first n bytes by s with constant byte b
 * @s: character
 * @b: pointer
 * @n: number of bytes
 * Description: Fills the first n bytes by n with constant byte b
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

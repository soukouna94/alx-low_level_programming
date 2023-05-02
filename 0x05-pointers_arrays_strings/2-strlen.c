#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Description: Returns the length of a string
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

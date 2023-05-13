#include "main.h"

/**
 * _strcmp - String Comparison
 * @s1: first string
 * @s2: second string
 * Description: String comparison
 * Return: negative if s1 < s2, 0 if equal, > 0 else
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

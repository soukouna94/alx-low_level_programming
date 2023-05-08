#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string where the search will be done
 * @c: character to be located
 * Description: Locates a character in a string
 * Return: A pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

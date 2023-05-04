#include "main.h"

/**
 * string_toupper - Converts all lowercase elements of string to upper
 * @s: string
 * Description: Converts string from lower to upper
 * Return: pointer to the new string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

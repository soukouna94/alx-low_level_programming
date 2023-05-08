#include "main.h"

/**
 * _strstr - Finds the first occurence of string needle in a string haystack
 * @needle: string to locate
 * @haystack: string where to look at needle
 * Description: Locates a substring in a string
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	while (haystack[i])
	{
		while ((haystack[i] == needle[0]) && needle[j])
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (NULL);
}

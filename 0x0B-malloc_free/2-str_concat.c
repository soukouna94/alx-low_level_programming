#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function concatenates two strings
 * @s: character
 * @t: character
 * Description: this function concatenates two strings
 * Return: A pointer to the address of the newly string
 */
char *str_concat(char *s, char *t)
{
	int i, sizeS, sizeT, sizeConcat;
	char *concat;

	sizeS = 0;
	sizeT = 0;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			sizeS++;
			i++;
		}
	}
	i = 0;
	if (t != NULL)
	{
		while (t[i] != '\0')
		{
			sizeT++;
			i++;
		}
	}
	sizeConcat = sizeS + sizeT;
	concat = (char  *)malloc((sizeof(char) * sizeConcat) + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeS; i++)
	{
		concat[i] = s[i];
	}
	for (i = 0; i < sizeT; i++)
	{
		concat[i + sizeS] = t[i];
	}
	concat[sizeConcat] = '\0';
	return (concat);
}

#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: char
 * @s2: char
 * @n : unsigned integer
 * Description: concatenate s1 and the first n bytes of s2
 * Return: a pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sizeFirstStr, sizeSecondStr, i;
	char *sConcat;

	i = 0;
	sizeFirstStr = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		sizeFirstStr++;
	}
	i = 0;
	sizeSecondStr = 0;

	for (i = 0; s2[i] != '\0'; i++)
	{
		sizeSecondStr++;
	}
	if (sizeSecondStr > n)
	{
		sizeSecondStr = n;
	}
	sConcat = malloc(sizeof(char) * (sizeFirstStr + sizeSecondStr + 1));
	if (sConcat == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i < sizeFirstStr; i++)
	{
		sConcat[i] = s1[i];
	}
	i = 0;
	for (i = 0; i < sizeSecondStr; i++)
	{
		sConcat[i + sizeFirstStr] = s2[i];
	}
	sConcat[sizeFirstStr + sizeSecondStr] = '\0';

	return (sConcat);
}

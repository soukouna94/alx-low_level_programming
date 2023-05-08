#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: initial memory area containing occurence of accept
 * @accept: accepted prefix substring
 * Description: Gets the length of a prefix substring
 * Return: Number of bytes in s which consists only of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32)
		{
			return (k);
		}
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}

	}
	return (k);
}

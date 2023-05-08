#include "main.h"

/**
 * _strpbrk - locates the first occurence in s of any bytes of accept
 * @s: string where the search will be applied
 * @accept: string where each of its bytes will be searched in s
 * Description: Locates the first occurence in s of any bytes of accept
 * Return: A pointer to the byte in s which matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

#include "main.h"

/**
 * leet: function which encodes a string to 1337
 * @s: string to be encoded
 * Description: Encode a string into 1337
 * Return: return pointer to encoded string
*/
char *leet(char *s)
{
	int i, j;

	char *letters = "aeotlAEOTL";
	char *codes = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = codes[j];
			}
		}
	}

	return (s);
}

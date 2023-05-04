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

	char *letters = "aAeEoOtTlL";
	char *codes = "4433007711";

	i = 0;
	j = 0;

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

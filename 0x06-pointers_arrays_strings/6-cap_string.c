#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string where each will word will be capitalize
 * Description: Capitalize all words of a string
 * Return: pointer of the capitalize string
 */
char *cap_string(char *s)
{
	int i, j;
	char delimiters[13] = {'\n', '\t', '.', ';', ' ', ',',
		'!', '?', '"', '(', ')', '{', '}'};
	i = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == delimiters[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}

	return (s);
}

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 * Description: Reverse a string
 * Return: None
 */
void rev_string(char *s)
{
	char tmpChar;
	int i, n, revN;

	n = 0;
	revN = 0;

	while (s[n] !=  '\0')
	{
		n++;
	}

	revN = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmpChar = s[i];
		s[i] = s[revN];
		s[revN--] = tmpChar;
	}
}

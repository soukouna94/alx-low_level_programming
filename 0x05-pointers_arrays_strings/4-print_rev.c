#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Description: Print a string in reverse
 * Return: None
 */
void print_rev(char *s)
{
	int i, j, n;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	n = i;

	for (j = n - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}


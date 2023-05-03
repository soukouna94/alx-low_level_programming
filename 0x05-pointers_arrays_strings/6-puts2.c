#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string
 * Description: Print every other character of a string
 * Return: None
 */
void puts2(char *str)
{
	int i, n;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

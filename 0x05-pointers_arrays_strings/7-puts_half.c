#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 * Description: Prints half of the string
 * Return: None
 */
void puts_half(char *str)
{
	int i, j, n;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		for (i = n / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (j = (n - 1) / 2; j < n - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}

	_putchar('\n');
}

#include "main.h"

/**
 * print_line - print line
 * @n: an integer
 * Description: Print straight line in terminal
 * Return: None
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
}

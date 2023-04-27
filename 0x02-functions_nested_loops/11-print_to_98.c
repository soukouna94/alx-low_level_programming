#include "main.h"
/**
 * print_to_98 - Entry Point
 * @n: number
 * Description: Print numbers from n to 98
 * Return: None
 */
void print_to_98(int n)
{
	int i, j;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			if (i == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			_putchar(j + '0');

			if (j == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

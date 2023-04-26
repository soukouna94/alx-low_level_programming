#include "main.h"
/**
 * times_table - Entry Point
 * Description: Prints the nine times table
 * Return: None
 */
void times_table(void)
{
	int row, col, prod;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			prod = col * row;
			if (col == 0)
			{
				_putchar(prod + 48);
			}
			if (prod < 10 && col > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + 48);
			}
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
		}
		_putchar('\n');
	}
}

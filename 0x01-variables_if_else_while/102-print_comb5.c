#include <stdio.h>
/**
 * main - Software is eating the World.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 9 || i != 9)
			{
				for (k = 0; k <= 9; k++)
				{
					l = 0;
					while (10 * k + l > 10 *i + j)
					{
						putchar(48 + i);
						putchar(48 + j);
						putchar(' ');
						putchar(48 + k);
						putchar(48 + l);
					}
					if (10 * i + j < 98)
					{
						putchar(',');
						putchar(' ');
					}	
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

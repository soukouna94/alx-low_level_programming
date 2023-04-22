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
				if (j == 9)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(' ');
					putchar(48 + i + 1);
					putchar(48);
					putchar(',');
				}
				else
				{
					for (k = i; k <= 9; k++)
					{
						for (l = j + 1; l <= 9; l++)
						{
							putchar(48 + i);
							putchar(48 + j);
							putchar(' ');
							putchar(48 + k);
							putchar(48 + l);
							if (10 * i + j < 98)
							{
								putchar(',');
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

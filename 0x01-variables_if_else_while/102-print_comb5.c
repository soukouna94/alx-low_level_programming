#include <stdio.h>
/**
 * main - Software is eating the World.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(48 + i / 10);
			putchar(48 + i % 10);
			putchar(' ');
			putchar(48 + j / 10);
			putchar(48 + j % 10);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

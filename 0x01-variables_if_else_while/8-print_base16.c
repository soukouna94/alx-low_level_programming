#include <stdio.h>
/**
 * main - Write a program that prints all hexadecimal numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}	
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

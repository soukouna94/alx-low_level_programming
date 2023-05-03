#include "main.h"
#include "stdio.h"

/**
 * print_array - print elements of an array
 * @a: first integer
 * @n: second integer
 * Description: Print elements of an integer
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}

	printf("/n");
}

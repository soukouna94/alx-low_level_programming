#include "main.h"

/**
 * reverse_array - reverses elements of an array of integers
 * @a: an array of integers
 * @n: an integer
 * Description: Reverses elemennts of an array of integers
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int i, j, element;

	i = 0;
	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		element = a[i];
		a[i] = a[j];
		a[j] = element;
		j--;
	}
}


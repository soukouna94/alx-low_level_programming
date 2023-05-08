#include "main.h"

/**
 * print_diagsums - prints sum of diagonals of sq matrix of int
 * @a: matrix
 * @size: number of rows/cols of the matrix
 * Description: Prints sum of diagonals of sq matrix of int
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i, x, y, diag, crossDiag;

	diag = 0;
	crossDiag = 0;

	for (i = 0; i < size; i++)
	{
		x = i * (size + 1);
		y = i * (size - 1) + (size - 1);
		diag += *(a + x);
		crossDiag += *(a + y);
	}
	printf("%i, %i\n", diag, crossDiag);
}

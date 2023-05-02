#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: an integer
 * @b: an integer
 * Description: Swap values of two integers
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

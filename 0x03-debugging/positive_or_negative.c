#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - Print whether an integer is positive or negative
 *@n: Integer
 * Description: Print Whether an integer is positive or negative
 * Return: Void
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	printf("\n");
}

#include "main.h"

/**
 * factorial - factorial of an integer
 * @n: integer
 * Description: Factorial of an integer
 * Return: Factorial of an integer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}

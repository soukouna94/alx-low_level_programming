#include "main.h"

/**
 * _square_recursion - Checks if p^2=n, otherwise run fc with p+1
 * @p: integer
 * @n: integer
 * Description: Checks if p^2 = n, otherwise run fct with p+1
 * Return: An integer
 */
int _square_recursion(int p, int n)
{
	if (p * p == n)
	{
		return (p);
	}
	if (p * p > n)
	{
		return (-1);
	}
	return (_square_recursion(p + 1, n));
}
/**
 * _sqrt_recursion - Compute the natural square root of a number
 * @n: integer
 * Description: Compute the natural square root of a number
 * Return: An integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_square_recursion(1, n));
}

#include "main.h"

/**
 * is_multiple_number - Checks if n is a multiple of p
 * @n: integer
 * @p: integer
 * Description: Checks if n is a multiple of p
 * Return: 0 if n is a multiple of p, 1 otherwise
 */
int is_multiple_number(int p, int n)
{
	if (p >= n)
	{
		return (1);
	}
	if (n % p == 0)
	{
		return (0);
	}
	return (is_multiple_number(p + 1, n));
}
/**
 * is_prime_number - Checks if a number is a prime
 * @n: integer
 * Description: Checks if a number is a prime
 * Return: 1 if n is a prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_multiple_number(2, n));
}

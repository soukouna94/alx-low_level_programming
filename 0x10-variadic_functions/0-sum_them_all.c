#include "variadic_functions.h"

/**
 * sum_them_all - sum all its parameter
 * @n: int the number of arguments
 * Description: Sum all of its arguments
 * Return: an Integer representing the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sumArgs;
	unsigned int iter;
	va_list varArgList;

	va_start(varArgList, n);

	if (n == 0)
	{
		return (0);
	}

	for (iter = 0; iter < n; iter++)
	{
		sumArgs += va_arg(varArgList, int);
	}

	va_end(varArgList);

	return (sumArgs);
}

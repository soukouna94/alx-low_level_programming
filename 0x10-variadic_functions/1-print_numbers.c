#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string which will be printed between numbers
 * @n: number of integers passed to the function
 * Description: print all numbers passed seperated by seperator
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	va_list varArgList;

	va_start(varArgList, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (iter = 0; iter < n; iter++)
	{
		printf("%d", va_arg(varArgList, int));
		if (iter != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(varArgList);
}

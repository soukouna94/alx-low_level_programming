#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string which will be printed between strings
 * @n: number of strings passed to the function
 * Description: print all strings passed seperated by seperator
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *currStr;
	unsigned int iter;
	va_list varArgList;

	va_start(varArgList, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (iter = 0; iter < n; iter++)
	{
		currStr = va_arg(varArgList, char*);
		if (currStr == NULL)
		{
			currStr = "(nil)";
		}
		printf("%s", currStr);
		if (iter != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(varArgList);
}

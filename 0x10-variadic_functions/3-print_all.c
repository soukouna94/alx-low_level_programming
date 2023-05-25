#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: type of arguments passed to the function
 * Description: Print Anything based on the format of the args
 * Return: None
 */
void print_all(const char * const format, ...)
{
	char *currStr;
	va_list varArgList;
	int isValidFormat;
	unsigned int iter;

	va_start(varArgList, format);
	iter = 0;
	isValidFormat = 0;
	while (format != NULL && format[iter] != '\0')
	{
		isValidFormat = 1;
		if (format[iter] == 'c')
		{
			printf("%c", va_arg(varArgList, int));
		}
		else if (format[iter] == 'i')
		{
			printf("%d", va_arg(varArgList, int));
		}
		else if (format[iter] == 's')
		{
			currStr = va_arg(varArgList, char*);
			if (currStr == NULL)
			{
				currStr = "(nil)";
			}
			printf("%s", currStr);
		}
		else
		{
			isValidFormat = 0;
		}
		if (format[iter + 1] != '\0' && (isValidFormat == 1))
		{
			printf(", ");
		}
		iter++;
	}
	printf("\n");
	va_end(varArgList);
}

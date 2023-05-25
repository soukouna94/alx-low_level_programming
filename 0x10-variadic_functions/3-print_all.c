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
		switch (format[iter])
		{
			case 'c':
				printf("%c", va_arg(varArgList, int));
				break;
			case 'i':
				printf("%d", va_arg(varArgList, int));
				break;
			case 's':
				currStr = va_arg(varArgList, char*);
				if (currStr == NULL)
				{
					currStr = "(nil)";
				}
				printf("%s", currStr);
				break;
			default:
				isValidFormat = 0;
				break;
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

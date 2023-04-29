#include "main.h"

/**
 * main - Fizz Buzz
 * Description: Prints numbers form 1 to 100 and use Buzz and Fizz for //3
 * Return: None
 */
void printStr(char listToPrint[], int listSize)
{	int k;

	for (k = 0; k < listSize; k++)
	{
		_putchar(listToPrint[k]);
	}
}
int main(void)
{
	int i;
	char fizz[] = " Fizz", buzz[] = " Buzz", fizzbuzz[] = " FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printStr(fizz, 5);
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printStr(buzz, 5);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printStr(fizzbuzz, 9);
		}
		else if (i == 1)
		{
			_putchar(i + 48);
		}
		else
		{
			_putchar(' ');
			if ((i / 10) > 0)
			{
				_putchar((i / 10) + 48);
			} 
			_putchar((i % 10) + 48);
		}
	}
	_putchar('\n');

	return (0);
}

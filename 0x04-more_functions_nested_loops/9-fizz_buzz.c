#include "main.h"

/**
 * main - Fizz Buzz
 * Description: Prints numbers form 1 to 100 and use Buzz and Fizz for //3
 * Return: None
 */
int main(void)
{
	int i, k;
	char fizz[] = "Fizz", buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			for (k = 0; k < 4; k++)
			{
				_putchar(fizz[k]);
			}
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			for (k = 0; k < 4; k++)
			{
				_putchar(buzz[k]);
			}
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			for (k = 0; k < 8; k++)
			{
				_putchar(fizzbuzz[k]);
			}
		}
		else if (i == 1)
		{
			_putchar(i + 48);
		}
		else
		{
			_putchar(' ');
			_putchar(i + 48);
		}
	}
	_putchar('\n');

	return (0);
}

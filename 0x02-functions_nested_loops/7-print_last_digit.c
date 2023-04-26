#include "main.h"
/**
 * print_last_digit - Entry Point
 *@n: the number which we will extract the last digit
 * Description: Print the last digit of a number
 * Return: n%10 (If the number is positive)
 *(-n)%10 (If the number is negative)
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n = -n;
	}

	d = n % 10;

	if (d < 0)
	{
		d = -d;
	}
	_putchar(48 + d);

	return (d);
}

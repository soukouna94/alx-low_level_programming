#include "main.h"
/**
 * print_sign - Entry Point
 *@n: the number which its sign will be checked
 * Description: Print the sign of a number
 * Return: 1 (If the number is positive)
 *0 (If the number is zero)
 *-1 (If the number is negative or if it fails)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		return (-1);
	}
}

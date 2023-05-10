#include "main.h"

/**
 * _pow_recursion - computes x power of y
 * @x: base
 * @y: exponent
 * Description: Computes x power of y recursively
 * Return: Integer representing x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

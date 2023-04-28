#include "main.h"

/**
 * _isdigit - checks if it's a digit from 0 to 9
 * @c: an integer
 * Description: Checks if an integer is a digit from 0 to 9
 * Return: 1 if it's a digit from 0  to 9, 0 otherwise
 */

int _isdigit(int c)
{
	return ( c >= '0' && c <= '9');
}

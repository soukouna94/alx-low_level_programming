#include "main.h"

/**
 * _puts_recursion - this function prints a string
 * @s: string we need to print
 * Description: prints a string
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

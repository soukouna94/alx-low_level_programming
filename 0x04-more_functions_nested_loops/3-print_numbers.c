#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Description: Print numbers from 0 to 9
 * Return: None
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}

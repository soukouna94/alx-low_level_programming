#include "main.h"
/**
 * main - Entry Point
 *
 * Description: Print Alphabet
 * @parameter: describe parameter
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char e = 'a';

	while (e <= 'z')
	{
		_putchar(e);
		e++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 *
 * Description: Print Alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char e;
	int counter;

	counter = 0;

	while (counter < 10)
	{
		e = 'a';
		while (e <= 'z')
		{
			_putchar(e);
			e++;
		}
		counter++;
		_putchar('\n');
	}
}

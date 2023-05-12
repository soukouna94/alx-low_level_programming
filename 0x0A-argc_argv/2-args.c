#include "stdio.h"

/**
 * main - check the code
 *@argc: integer
 * @argv: array of arguments
 * Description: Prints the all args it receives
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	(void) argc;
	for (i = 1; argv[i] != 0; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

#include "stdio.h"

/**
 * main - check the code
 * @argc: integer
 * @argv: array of arguments
 * Description: Prints the name of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

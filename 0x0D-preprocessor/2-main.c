#include "stdio.h"

/**
 * main - main function
 * Description: prints the name of the file it was compiled from
 * Return: 0 if it didn't fail
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

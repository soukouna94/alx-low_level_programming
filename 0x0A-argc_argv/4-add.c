#include "stdio.h"
#include "stdlib.h"

/**
 * main - check the code
 *@argc: integer
 * @argv: array of arguments
 * Description: Prints the addition of two numbers
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, j, sum;
	char *s;

	if (argc == 1)
	{
		printf("%d\n", 0);

		return (0);
	}
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		s = argv[i];

		for (j = 0; s[j] != '\0'; j++)
		{
			if (!(s[j] >= '0' && s[j] <= '9'))
			{
				printf("Error\n");

				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

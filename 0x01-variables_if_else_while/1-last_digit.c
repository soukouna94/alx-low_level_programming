#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,remainder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	remainder = n%10;
	printf("Last digit of %d is %d \n", n, remainder);
	if (remainder > 5)
	{
		printf(" and is greater than 5");
	}
	else if (remainder == 0)
	{
		printf(" and is 0");
	}
	else
	{
		printf(" and is less than 6 and not 0");
	}	
	return (0);
}

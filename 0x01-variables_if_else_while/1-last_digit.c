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
	if (remainder > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, remainder);
	}
	else if (remainder == 0)
	{
		printf("Last digit of %d is %d and is 0", n, remainder);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, remainder);
	}	
	return (0);
}

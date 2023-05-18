#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
 * malloc_checked - it allocates memory using malloc
 * @b: unsigned int
 * Description: Allocates memory using malloc
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

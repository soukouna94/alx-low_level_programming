#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - function to free memory from dog instance
 * @d: dog
 * Description: function to free memory from dog instance
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

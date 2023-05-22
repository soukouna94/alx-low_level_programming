#include "dog.h"

/**
 * init_dog - initialize variable of type dog
 * @d: dog
 * @name: char
 * @age : float
 * @owner: char
 * Description: initialize variable of type dog
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

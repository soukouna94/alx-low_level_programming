#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner : char
 * Description: creates a new dog
 * Return: a new dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	unsigned int lenName, lenOwner, i;

	if ((name == NULL) || (owner == NULL))
	{
		return (NULL);
	}
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	while (name[lenName])
	{
		lenName++;
	}
	lenName++;
	newDog->name = malloc(lenName * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < lenName; i++)
	{
		newDog->name[i] = name[i];
	}
	newDog->age = age;
	while (owner[lenOwner])
	{
		lenOwner++;
	}
	lenOwner++;
	newDog->owner = malloc(lenOwner * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < lenOwner; i++)
	{
		newDog->owner[i] = owner[i];
	}
	return (newDog);
}

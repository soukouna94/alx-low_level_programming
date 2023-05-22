#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 * Description: Dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif/*DOG_G*/

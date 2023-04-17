#include "dog.h"

/**
 * init_dog - introduces us to the dog.
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: How old the dog is.
 * @owner: pointer to owner of dog
 * Return: Has no return value
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

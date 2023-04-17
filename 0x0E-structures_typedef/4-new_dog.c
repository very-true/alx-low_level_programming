#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - This is for the dog
 * @name: the name of the dog
 * @age: How old the dog is
 * @owner: The person who owns the dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	a++;
	dog->name = malloc(a * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		dog->name[c] = name[c];
	dog->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	dog->owner = malloc(b * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

#ifndef DOG
#define DOG

/**
 * struct dog - This a class for the dog
 * @name: The dog's name
 * @age: How old the dog is.
 * @owner: The person who owns the dog
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

void free_dog(dog_t *d);

#endif

#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog new_dog;

	new_dog.name = name;
	new_dog.age = age;
	new_dog.name = owner;

	return (new_dog);
}


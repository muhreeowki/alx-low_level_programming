#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to dog struct
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

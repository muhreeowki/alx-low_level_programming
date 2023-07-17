#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints all the members in the dog struct
 *
 * @d: pointer to dog struct
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

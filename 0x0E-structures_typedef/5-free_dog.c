#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog struct from memory
 *
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

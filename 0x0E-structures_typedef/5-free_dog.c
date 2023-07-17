#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - frees dog struct from memory
 *
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

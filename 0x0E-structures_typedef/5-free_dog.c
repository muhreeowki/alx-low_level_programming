#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *str, char *dest);

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

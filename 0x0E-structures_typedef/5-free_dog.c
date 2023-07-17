#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *str, char *dest);

/**
 * new_dog - creates a new dog
 *
 * @name: name to assign to the dog
 * @age: age to assign to the dog
 * @owner: owner to assign to the dog
 *
 * Return: Pointer to newly created dog
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

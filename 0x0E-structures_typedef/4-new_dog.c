#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name to assign to the dog
 * @age: age to assign to the dog
 * @owner: owner to assign to the dog
 *
 * Return: Pointer to newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;

	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;

	return (new_dog);
}

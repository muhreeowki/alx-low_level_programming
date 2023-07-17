#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
void _strcpy(char *str, char *dest);

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
	dog_t *dog = malloc(sizeof(dog));
	char *new_name = malloc(sizeof(_strlen(name)) + 1);
	char *new_owner = malloc(sizeof(_strlen(owner)) + 1);

	if (new_name == NULL || new_owner == NULL)
		return (NULL);

	_strcpy(name, new_name);
	_strcpy(owner, new_owner);

	dog->name = new_name;
	dog->owner = new_owner;
	dog->age = age;

	return (dog);
}


/**
 * _strlen - finds the length of a string
 *
 * @str: pointer to a string
 *
 * Return: length of the strng
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}


/**
 * _strcpy - copies a string into a buffer
 *
 * @str: string to copy
 * @dest: pointer to buffer
 */

void _strcpy(char *str, char *dest)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];

	dest[i] = '\0';
}

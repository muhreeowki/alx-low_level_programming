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
	dog_t *new_dog;

	char *dog_name, *dog_owner;

	new_dog = malloc(sizeof(dog_t));
	dog_name = malloc(sizeof(_strlen(name)));
	dog_owner = malloc(sizeof(_strlen(owner)));

	_strcpy(name, dog_name);
	_strcpy(owner, dog_owner);

	new_dog->name = dog_name;
	new_dog->age = age;
	new_dog->owner = dog_owner;

	return (new_dog);
}


/**
 * _strlen - finds the length of a string
 *
 * @str: pointer to a string
 *
 * @Return: length of the strng
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
 *
 * @Return: length of the strng
 */

void _strcpy(char *str, char *dest)
{
	int i, len;

	len = _strlen(str);

	for (i = 0; i < len; i++)
		dest[i] = str[i];

	dest[i] = '\0';
}

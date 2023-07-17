#include "dog.h"
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

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog; 


	if (name == NULL || owner == NULL || age <= 0)
		return (NULL);

	dog = malloc(sizeof(dog));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(name, dog->name);
	dog->owner = _strcpy(owner, dog->owner);
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
 *
 * Return: dest
 */

char *_strcpy(char *str, char *dest)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];

	dest[i] = '\0';

	return (dest);
}

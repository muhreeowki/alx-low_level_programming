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

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
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

	_strcpy(name, dog->name);
	dog->age = age;
	_strcpy(owner, dog->owner);

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

	i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - Coppies a string to a buffer
 *
 * @str: pointer to a string to copy
 * @dest: pointer to a buffer
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

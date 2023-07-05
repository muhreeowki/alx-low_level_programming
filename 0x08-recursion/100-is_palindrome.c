#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse - reverses a string
 *
 * @s: pointer to string
 * @len: length of the string
 * @i: index to start from
 *
 * Return: pointer
 */

char *reverse(char *s, int len, int i)
{
	char c;

	if (i > (len - 1) / 2)
		return (s);

	c = *(s + i);
	*(s + i) = *(s + (len - 1 - i));
	*(s + (len - 1 - i)) = c;

	return (reverse(s, len, i + 1));
}

/**
 * _strlen - finds the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * _strcpy - copies string src to string dest
 *
 * @src: pointer to string to copy
 * @dest: pointer to string to copy to
 * @i: index to copy from
 *
 * Return: pointer dest
 */

char *_strcpy(char *src, char *dest, int i)
{
	*(dest + i) = *(src + i);

	if (*(src + i) == '\0')
		return (dest);

	return (_strcpy(src, dest, ++i));
}

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: 0 (same) negative int or positive int (not same)
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 == '\0')
		return (0);

	if (*s1 > *s2)
		return (*s1 - *s2);

	return (_strcmp(s1 + 1, s2 + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: pointer to the string
 *
 * Return: 1 (is a palindrome) 0 (is not a palindrome)
 */

int is_palindrome(char *s)
{
	char *revs;
	int len;

	len = _strlen(s);
	revs = malloc(len + 1);

	if (*s == '\0')
		return (1);

	_strcpy(s, revs, 0);

	reverse(revs, len, 0);

	if (_strcmp(s, revs) == 0)
		return (1);

	return (0);
}

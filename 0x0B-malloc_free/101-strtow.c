#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * word_counter - helper function to count
 * the words in a string.
 *
 * @str: string
 *
 * Return: Number of words
 */

int word_counter(char *str)
{
	int i, words, space;

	space = 0;
	words = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			space = 1;
		}

		else if (space == 1)
		{
			space = 0;
			words++;
		}
	}

	return (words);
}


/**
 * add_word - helper function to add a word to
 * an array of strings
 *
 * @words: array of strings
 * @str: string
 * @start: starting index of word
 * @end: ending index of word
 * @wi: index of the word in the array of strings
 *
 * Return: 0 (Success) -1 (failur)
 */

int add_word(char **words, char *str, int start, int end, int wi)
{
	int j, wl;
	char *temp;

	wl = end - start;

	j = 0;

	temp = (char *) malloc(sizeof(char) * (wl + 1));

	if (temp == NULL)
		return (-1);

	for (j = 0; start < end; j++, start++)
		temp[j] = str[start];

	temp[j] = '\0';
	words[wi] = temp;

	return (0);
}

/**
 * validate_string - checks if a string is valid
 *
 * @str: string
 *
 * Return: 0 (success) NULL (faliure)
 */

int validate_string(char *str)
{
	int i;

	if (str == NULL || *str == '\0')
		return (-1);

	if (str[0] == ' ' && str[1] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			return (0);
	}

	return (-1);
}


/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: Pointer to an array of strings
 */

char **strtow(char *str)
{
	char **words;
	int word_count, len, i, wl, wi, start, end;

	if (validate_string(str) == -1)
		return (NULL);

	wl = wi = len = 0;

	while (str[len] != '\0')
		len++;

	word_count = word_counter(str);

	words = (char **) malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (wl > 0)
			{
				end = i;
				if (add_word(words, str, start, end, wi) == -1)
					return (NULL);
				wi++;
				wl = 0;
			}
		}
		else
		{
			if (wl == 0)
				start = i;
			wl++;
		}
	}
	words[wi] = NULL;
	return (words);
}

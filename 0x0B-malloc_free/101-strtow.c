#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * argstostr - splits a string into words
 *
 * @str: string to split
 *
 * Return: Pointer to an array of strings
 */

char **strtow(char *str)
{
	int i, j, n, word_count, word_len, word_index;
	char **words, *temp;

	word_count = 0;
	word_len = 0;

	/* Find the number of words */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			word_count++;
	}

	words = (char **) malloc(sizeof(char *) * (word_count + 1));
	word_index = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		while(str[i] != ' ')
		{
			word_len++;
			i++;
		}

		if (word_len > 0)
		{
			temp = malloc(sizeof(char) * (word_len + 1));

			for (j = 0, n = i - word_len; n < i; n++, j++ )
			{
				temp[j] = str[n];
			}

			temp[j] = '\0';
			words[word_index] = temp;
			word_index++;
			word_len = 0;
		}
	}

	return (words);
}

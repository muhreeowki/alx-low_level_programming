#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int word_counter(char *str)
{
	int i, words, flag;

	flag = 0;
	words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			flag = 0;
		}

		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}

/**
 * argstostr - splits a string into words
 *
 * @str: string to split
 *
 * Return: Pointer to an array of strings
 */

char **strtow(char *str)
{
	/*
	   0. Handle Errors
	   1. Find the number of words in the string
	   2. Allocate memory for an array of pointers for each word
	   3. Find each word in memory.
	   4. Turn each word into a string. Allocate enough memory for the string. Terminate the string.
	   5. Add the string to the array of pointers.
	   6. Return the array of pointers
	 */

	/* 0. Handle errors*/
	char **words, *temp;
	int i, n, j, wl, wi, word_count;

	if (str == NULL || *str == '\0' || (*str == ' ' && *(str + 1) == '\0'))
		return (NULL);

	/* 1. Count words */
	word_count = word_counter(str);

	/* 2. Allocate memory for array of pointers */
	words = (char **) malloc(sizeof(char) * (word_count + 1));
	
	if (words == NULL)
		return (NULL);

	/* 3. Find each word in memory*/

	wi = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\0')
		{
			if (wl > 0)
			{
				/* 4. Turn each word into a string,
				   Allocate memory for the string,
				   Terminate the string
				   Append string to pointers array
				 */
				temp = malloc(sizeof(char) * (wl + 1));
				if (temp == NULL)
				{
					free(words);
					return (NULL);
				}
				
				for (j = 0, n = i - wl; n < i; n++, j++)
					temp[j] = str[n];

				temp[j] = '\0';
				words[wi] = temp;
				wi++;
				wl = 0;
			}
		}
		else
			wl++;
	}

	words[wl] = NULL;

	return (words);
}

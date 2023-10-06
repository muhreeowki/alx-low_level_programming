#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of the array
 *
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}



/**
 * _strdup - creates a duplicate of a string.
 *
 * @str: pointer to string to duplicate
 *
 * Return: Pointer to string, or NULL if it fails.
 */

char *_strdup(char *str)
{
	int i, n = 0;
	char *dupstr = NULL;

	if (str == NULL)
		return (NULL);

	while (*(str + n) != '\0')
		n++;

	dupstr = (char *) malloc(sizeof(char) * n + 1);
	if (dupstr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		dupstr[i] = str[i];

	dupstr[i] = '\0';

	return (dupstr);
}


/**
 * print_hash_table - function that prints a hash table
 *
 * @ht: hash table to print
 *
 * Return: nothing
 */

void print_hash_table(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			printf("index %ld:\t---\n", i);
		else
		{
			printf("index %ld:", i);
			node = ht->array[i];
			while (node)
			{
				printf("\t%s ->", node->value);
				node = node->next;
			}
			printf("\n");
		}
	}
}

/**
 * _strcmp - copmares two strings case sensitivly.
 *
 * @s1: pointer to string to be compared
 * @s2: pointer to string to compare to
 *
 * Return: 0 if strings are equal
 * 1 if the first non-matching character in str1 is greater than that of str2
 * -1 if the first non-matching character in str1 is less than that of str2
 */

int _strcmp(char *s1, char *s2)
{

	int i;

	i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
			return (0);
		i++;
	}

	return (*(s1 + i) - *(s2 + i));
}

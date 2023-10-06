#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table to add the value to
 * @key: key for the value
 * @value: value to add
 *
 * Return: 1 (success) 0 (faliure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash = 0;
	hash_node_t *new_node = NULL;

	if (key == NULL || ht == NULL || *key == '\0')
		return (0);

	/* create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* initialize the node */
	new_node->key = (char *)key;
	new_node->value = _strdup((char *)value);
	new_node->next = NULL;
	/* run the hash function with the key */
	hash = key_index((const unsigned char *)key, ht->size);
	printf("hash: %ld\n", hash);
	/* add the new element to the list */
	ht->array[hash] = insert(ht->array[hash], new_node);

	return (1);
}

/**
 * insert - function that adds an element to a linked list
 *
 * @head: head of the linked list
 * @element: value to add
 *
 * Return: 1 (success) 0 (faliure)
 */

hash_node_t *insert(hash_node_t *head, hash_node_t *element)
{
	if (head == NULL)
		return (element);

	element->next = head;
	head = element;

	return (head);
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


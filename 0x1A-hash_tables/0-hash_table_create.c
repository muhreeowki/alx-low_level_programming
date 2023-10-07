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
	hash_node_t **array;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = array;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
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

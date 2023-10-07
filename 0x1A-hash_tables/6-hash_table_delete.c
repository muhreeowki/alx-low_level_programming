#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: hash table to delete
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
		}
		free(ht->array);
		free(ht);
	}
}

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
	unsigned long int i;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	hash_node_t **array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	new_table->array = array;
	new_table->size = size;

	return (new_table);
}

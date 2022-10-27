#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: Size of the array
 * Return: Pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (!size)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	memset(hash_table->array, 0, size * sizeof(hash_node_t));

	hash_table->size = size;

	return (hash_table);
}

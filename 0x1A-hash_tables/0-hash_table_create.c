#include "hash_tables.h"

/**
 * hash_table_create - func that creates a hash table.....
 * @size: the size,.....
 *
 * Return: a pointer to the newly created hash table
 * and NULL if sth goes wrong.....
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int c = 0;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; c < size; c++)
		ht->array[c] = NULL;

	return (ht);
}

#include "hash_tables.h"

/**
 * hash_table_delete - Delete the hash-table,..
 * @ht: Hash-table,..
 *
 * Return: Void,..
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pd;
	hash_node_t *current;

	for (pd = 0; pd < ht->size; pd++)
	{
		if (ht->array[pd] != NULL)
		{
			while (ht->array[pd] != NULL)
			{
				current = ht->array[pd]->next;
				free(ht->array[pd]->key);
				free(ht->array[pd]->value);
				free(ht->array[pd]);
				ht->array[pd] = current;
			}
		}
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"
/**
 * hash_table_print - printing a hash table
 * @ht: the hash table
 * Return: void
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	index = 0;
	while (index < ht->size)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			if (first == 1)
			{
				printf("%s': '%s'", node->key, node->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}

#include "hash_tables.h"
#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table to look into
 * @key: is the key you are looking for
 * Return: value associated with the element, or NULL if key couldn’t
 * be found.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{/*Do not miss the reference*/
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}


	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
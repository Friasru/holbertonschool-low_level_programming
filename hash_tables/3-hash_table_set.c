#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *new;
	unsigned long int index;
	char *val_copy;

	if (!ht || !key || !*key)
		return (0);
	val_copy = malloc(strlen(value) + 1);
	if (!val_copy)
		return (0);
	strcpy(val_copy, value);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key))
		{
			free(node->value);
			new->value = val_copy;
			return (1);
		}
		new = node->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new || !(new->key = malloc(strlen(key) + 1)))
	{
		free(val_copy);
		free(new);
		return (0);
	}
	strcpy(new->key, key);
	new->value = val_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

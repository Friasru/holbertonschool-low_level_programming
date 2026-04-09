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
	char *val_copy, *key_copy;

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
			return(free(node->value), node->value = val_copy, 1);
		new = node->next;
	}
	key_copy = malloc(strlen(key) + 1);
	if (!key_copy)
		return (free(val_copy), 0);
	strcpy(new->key, key);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (free(val_copy), free(key_copy), 0);
	new->key = key_copy;
	new->value = val_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *value_dup;
	unsigned long int idx;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	value_dup = strdup(value);
	if (!value_dup)
		return (0);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_dup;
			return (1);
		}
		tmp = tmp->next;
	}
	return (add_node(ht, idx, key, value_dup));
}

/**
 * add_node - creates and adds a new node at the beginning of the list
 * @ht: the hash table
 * @idx: the index in the array
 * @key: the key
 * @value_dup: the already duplicated value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int add_node(hash_table_t *ht, unsigned long int idx,
	const char *key, char *value_dup)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_dup);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(value_dup);
		free(new_node);
		return (0);
	}
	new_node->value = value_dup;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}

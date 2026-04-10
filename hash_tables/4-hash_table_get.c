#include "hash_tables.h"

/**
 * hash_table_set - retrieves a values associated with a key
 * @ht: the hash table to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or NULL coulnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (!ht || !key || key[0] == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

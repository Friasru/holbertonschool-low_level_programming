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
    hash_node_t *new_node;
    unsigned long int index;
    char *value_copy;
    char *key_copy;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    value_copy = malloc(strlen(value) + 1);
    if (value_copy == NULL)
        return (0);
    strcpy(value_copy, value);

    index = key_index((unsigned char *)key, ht->size);

    if (_find_and_update(ht->array[index], key, value_copy))
        return (1);

    key_copy = malloc(strlen(key) + 1);
    if (key_copy == NULL)
    {
        free(value_copy);
        return (0);
    }
    strcpy(key_copy, key);

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(value_copy);
        free(key_copy);
        return (0);
    }

    new_node->key = key_copy;
    new_node->value = value_copy;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

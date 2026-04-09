#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: is the key to hash
 * @size: the size of the array of the hash table
 *
 * Return: the index where the key or value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

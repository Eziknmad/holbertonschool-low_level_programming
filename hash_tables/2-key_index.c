#include "hash_tables.h"

/**
 * key_index - Get index of a key in hash table array
 * @key: The key (string)
 * @size: Size of the hash table array
 *
 * Return: Index where key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

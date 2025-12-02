#include "hash_tables.h"

/**
 * create_node - Creates a new hash node with key and value duplicated.
 * @key: The key to duplicate.
 * @value: The value to duplicate.
 *
 * Return: Pointer to new node or NULL on failure.
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;
	char *key_copy, *value_copy;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(node);
		return (NULL);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		free(node);
		return (NULL);
	}

	node->key = key_copy;
	node->value = value_copy;
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table to add or update.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Update value if key exists */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	/* Create and insert new node */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

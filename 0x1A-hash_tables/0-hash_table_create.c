#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table
 *         or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array;
	unsigned long int i;

	/* Allocate memory for the hash table */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* Initialize the elements of the array to NULL */
	for (i = 0; i < size; i++)
		array[i] = NULL;

	/* Assign values to the hash table */
	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}

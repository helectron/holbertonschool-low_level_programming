#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return: pointer to the newly created hash table or NULL
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_new = NULL;
    
    hash_new = malloc(sizeof (hash_table_t));
    if (hash_new == NULL)
        return (NULL);

}
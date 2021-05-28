#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return: pointer to the newly created hash table or NULL
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_new = NULL;
    
    /*memory allocation for the struct */
    hash_new = malloc(sizeof (hash_table_t));
    if (hash_new == NULL)
        return (NULL);

    /*memory allocation for the array member of the struct*/
    hash_new->size = size;
    hash_new->array = malloc(sizeof(char*)* size);
    if (hash_new->array == NULL)
    return (NULL);

    unsigned int i = 0;    
    while (i < size)
    {
        hash_new->array[i] = NULL;
        i++;
    }
    return(hash_new);
}
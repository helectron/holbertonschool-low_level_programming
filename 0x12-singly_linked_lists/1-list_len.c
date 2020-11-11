#include "lists.h"
/**
 * list_len - prints a list
 * @h: list_t pointer to head of list
 * Return: size of list with the number of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
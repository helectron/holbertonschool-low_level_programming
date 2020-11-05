#include "lists.h"

/**
 * listint_len - returns the number of elements in the list
 * @h: pointer to the head of the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

		while (h != NULL)
		{
			h = h->next;
			i++;
		}
		return (i);
}

#include "lists.h"

/**
 * dlistint_len - for returning the number of elements in a linked list
 * @h: head of the list
 * Return: returns the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

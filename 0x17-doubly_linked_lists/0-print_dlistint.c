#include "lists.h"

/**
 * print_dlistint - print  list of integers
 *@h: head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temporary = h;
	int count = 0;

	while (temporary != NULL)
	{
		printf("%d\n", temporary->n);
		temporary = temporary->next;
		count++;
	}
	return (count);
}

#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: pointer to the start of the list
 * Return: count the nodes in the list
 **/

size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}

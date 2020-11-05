#include "lists.h"

/**
 * *add_nodeint - addition of a new node at the beginning of listint_t
 * @head: double pointer to the beginning of listint_t list
 * @n: integer to add to the list
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
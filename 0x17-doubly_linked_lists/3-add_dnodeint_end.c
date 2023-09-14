#include "lists.h"
/**
 * dlistint_t *add_dnodeint_end - adds a new node at
 *	the end of a dlistint_t list
 * @head: address of pointer to current head node
 * @n: int field of new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node = node->next;
		new->prev = node;
	}
	return (new);
}

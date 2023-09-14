#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index - returns the nth
 *		node of a dlistint_t linked list
 * @head: pointer to current head node
 * @index: index of node to return
 * Return: address of node at index, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int u = 0;

	while (head)
	{
		if (u == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL)
}

#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to current head
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
	free(node);
	}
}

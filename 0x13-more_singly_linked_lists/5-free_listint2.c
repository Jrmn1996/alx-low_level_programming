#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 * Return: always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *disp;

	if (!head)
	{
		return;
	}
	node = *head;
	while (node)
	{
		disp = node;
		node = node->next;
		free(disp);
	}
	*head = NULL;
}

#include "lists.h"
/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to current head node
 * Return: the sum of data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

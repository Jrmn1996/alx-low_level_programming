#include "lists.h"
/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

#include "lists.h"
/**
 * listint_len - prints number of elements in a linked listint_t list
 * @h: pointer to the fist node
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}

#include "lists.h"

/**
 * listint_len - get the length of linked list
 * @h: pointer to list
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

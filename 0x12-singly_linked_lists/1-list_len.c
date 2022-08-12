#include "lists.h"

/**
 * list_len - number of nodes
 * @h: pointer to head
 * Return: lingth
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

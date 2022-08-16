#include "lists.h"

/**
 * print_listint - to print list
 * @h: pointer to list
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}

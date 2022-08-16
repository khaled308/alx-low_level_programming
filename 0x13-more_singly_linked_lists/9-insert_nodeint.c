#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @n: int
 * @idx: int
 * @head: pointer to node
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	current = *head;
	while (current)
	{
		if (count == idx - 1)
		{
			new->n = n;
			new->next = current->next;
			current->next = new;
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}

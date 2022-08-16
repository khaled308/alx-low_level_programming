#include "lists.h"

/**
 * get_nodeint_at_index - get the node
 * @head: pointer
 * @index: int
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	current = head;
	while (current)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}

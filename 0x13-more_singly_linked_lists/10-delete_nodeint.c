#include "lists.h"

/**
 * delete_nodeint_at_index - delte node
 * @index: int
 * @head: pointer
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	current = *head;
	while (current)
	{
		if (count == index - 1)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}

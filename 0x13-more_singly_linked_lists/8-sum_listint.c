#include "lists.h"

/**
 * sum_listint - sum of the list
 * @head: pointer
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

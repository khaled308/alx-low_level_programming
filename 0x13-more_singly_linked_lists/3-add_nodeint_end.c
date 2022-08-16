#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: pointer to list
 * @n: int
 * Return: pointer to head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current = *head;
	while (current->next)
		current = current->next;

	current->next = new_node;
	return (*head);
}

#include "lists.h"

/**
 * add_nodeint - add node to linledlist
 * @n: int
 * @head: head
 * Return: pointer to head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}

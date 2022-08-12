#include "lists.h"

/**
 * add_node_end - add node to the end of list
 * @head: pointer to head
 * @str: string
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int len;
	list_t *node;

	if (head == NULL || !str)
		return (NULL);

	len = get_length(str);
	new_node = malloc(sizeof(list_t));
	node = malloc(sizeof(list_t));

	if (!new_node || !node)
	{
		free(new_node);
		return (NULL);
	}

	node = *head;
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (node == NULL)
		*head = new_node;

	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}

	return (new_node);
}

/**
 * get_length - number of nodes
 * @str: string
 * Return: int
 */

int get_length(const char *str)
{
	int i = 0;

	while (*(str + i))
		i++;

	return (i);
}

#include "lists.h"

/**
 * add_node - add new node to list
 * @head: pointer to head
 * @str: string
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;

	if (head == NULL || !str)
		return (NULL);

	len = get_length(str);
	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}

/**
 * get_length - length of string
 * @str: char
 * Return: int
 */

int get_length(const char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	return (i);
}

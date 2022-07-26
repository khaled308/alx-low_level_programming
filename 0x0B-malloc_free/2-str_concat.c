#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	int s1_length = find_length(s1);
	int s2_length = find_length(s2);
	int i;
	char *new_str;

	new_str = malloc(s1_length + s2_length);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		*(new_str + i) = *(s1 + i);

	while (*s2)
	{
		*(new_str + i) = *s2;
		s2++;
		i++;
	}

	return (new_str);
}
/**
 * find_length - get length of the string
 * @str: pointer
 * Return: int
 */

int find_length(char *str)
{
	int length = 0;

	while (*(str + length))
		length++;

	return (length);
}

#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer
 * @accept: pointer
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int accept_index = 0;
	int s_index = 0;

	while (*(s + s_index))
	{
		if (!*(s + s_index))
			return (NULL);
		while (*(accept + accept_index))
		{
			if (*(s + s_index)  == *(accept + accept_index))
				return (s + s_index);

			accept_index++;
		}
		accept_index = 0;
		s_index++;
	}

	return (s + s_index);
}

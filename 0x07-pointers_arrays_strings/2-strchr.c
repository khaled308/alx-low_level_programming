#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: pointer
 * @c: char
 * Return: string
 */
char *_strchr(char *s, char c)
{

	while (*s != c)
	{
		if (!s++)
			return (NULL);
	}
	return (s);
}

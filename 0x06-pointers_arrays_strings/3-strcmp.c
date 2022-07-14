#include "main.h"

/**
 * _strcmp - compares the string pointed to, by str1 to the string pointed to by str2
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int s1_length = 0;
	int s2_length = 0;

	while (*(s1 + s1_length) || *(s2 + s2_length))
	{
		if (*(s1 + s1_length) != *(s2 + s2_length))
			return (*(s1 + s1_length) - *(s2 + s2_length));

		s1_length++;
		s2_length++;
	}
	return (0);
}

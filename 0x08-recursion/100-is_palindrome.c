#include "main.h"

/**
 * is_palindrome - check if string is plaindrome
 * @s: pointer
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = find_length(s);

	return (plaindrome(s, length, i));
}

/**
 * find_length - return the string length
 * @s: string
 * Return: int
 */


int find_length(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}

/**
 * plaindrome - check if string is plaindrome
 * @s: pointer
 * @length: int
 * @i: int
 * Return: int
 */

int plaindrome(char *s, int length, int i)
{
	if (i == length / 2)
		return (1);

	if (*(s + i) != *(s + length - 1 - i))
		return (0);

	i++;
	return (plaindrome(s, length, i));
}

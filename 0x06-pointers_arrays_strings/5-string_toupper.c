#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 *
 * @str: char
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		char tmp = *(str + i);

		if (tmp >= 'a' && tmp <= 'z')
			*(str + i) = tmp - 32;

		i++;
	}
	return (str);
}

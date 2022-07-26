#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int length = 0;
	char *cp_str;
	int i = 0;

	while (*(str + length))
		length++;

	cp_str = malloc(length);

	if (str == NULL || cp_str == NULL)
		return (NULL);

	while (*(str + i))
	{
		*(cp_str + i) = *(str + i);
		i++;
	}

	return (cp_str);
}

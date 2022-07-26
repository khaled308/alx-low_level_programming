#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: int
 * @c: char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(int) * size);
	unsigned int i;

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(arr + i) = c;

	return (arr);
}

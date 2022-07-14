#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_length = 0;

	while (*(dest + dest_length))
		dest_length++;

	while (*(src + src_length))
	{
		if (src_length >= n)
			break;

		*(dest + dest_length) = *(src + src_length);
		src_length++;
		dest_length++;
	}
	return (dest);
}

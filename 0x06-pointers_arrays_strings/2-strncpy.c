#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_length = 0;

	while (*(src + src_length))
	{
		if (src_length >= n)
			break;

		*(dest + src_length) = *(src + src_length);
		src_length++;
	}

	return (dest);
}

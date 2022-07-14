#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 *
 * @dest: pointer
 * @src: pointer
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;

	while (*(dest + dest_length))
		dest_length++;

	while (*(src + src_length))
	{
		*(dest + dest_length) = *(src + src_length);
		src_length++;
		dest_length++;
	}
	return (dest);
}

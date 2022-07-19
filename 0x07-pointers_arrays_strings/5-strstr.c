#include "main.h"
#include <stdio.h>

/**
 * _strstr - ocates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int haystack_index = 0,
	    needle_index = 0;

	while (*(haystack + haystack_index))
	{
		if (*(haystack + haystack_index) != *(needle + needle_index))
			needle_index = 0;
		else
			needle_index++;

		if (!*(needle + needle_index))
			break;

		haystack_index++;
	}

	return (haystack + haystack_index - needle_index + 1);
}

#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 *
 * @s: pointer
 * @accept: pointer
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int accept_count = 0;
	int s_count = 0;

	while (*(s + s_count))
	{
		accept_count = 0;

		while (*(accept + accept_count))
		{
			if (*(accept + accept_count) == *(s + s_count))
			{
				length++;
				break;
			}

			else
			{
				if (!*(accept + accept_count + 1))
					return (length);
			}

			accept_count++;
		}

		s_count++;
	}

	return (length);
}

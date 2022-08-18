#include "main.h"

/**
 * binary_to_uint - get decimal number
 * @b: str of 0 1
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i--;
	for (j = 1; i >= 0; i --, j *= 2)
		res += ((b[i] - '0') * j);

	return (res);
}

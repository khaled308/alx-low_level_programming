#include "main.h"

/**
 * _isupper - return 1 for upper, 0 for other
 * @c: int
 * Return: 1 || 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

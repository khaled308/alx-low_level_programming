#include "main.h"
/**
 * _islower - shows 1 if letter is lowercase
 * 0 for other cases
 *
 * @c: int
 *
 *Return: 1 || 0
 */
int  _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

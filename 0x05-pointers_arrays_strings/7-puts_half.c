#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer
 */
void puts_half(char *str)
{
	int length = 0;
	int j;

	while (*(str + length))
		length++;

	j = length / 2;

	while (j <= length)
	{
		_putchar(*(str + j));
		j++;
	}

	_putchar('\n');
}

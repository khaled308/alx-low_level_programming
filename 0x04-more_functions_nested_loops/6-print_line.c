#include "main.h"

/**
 * print_line -  print _ n times
 * @n : int
 */
void print_line(int n)
{
	int i = n;

	while (i > 0)
	{
		_putchar('_');
		i--;
	}
	_putchar('\n');
}

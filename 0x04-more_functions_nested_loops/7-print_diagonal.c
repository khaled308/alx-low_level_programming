#include "main.h"

/**
 * print_diagonal - print \
 *
 * @n: int
 *
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		int j = i;

		while (j > 0)
		{
			_putchar(' ');
			if (j == 1)
				_putchar('\\');
			j--;
		}
		_putchar('\n');
	}
}

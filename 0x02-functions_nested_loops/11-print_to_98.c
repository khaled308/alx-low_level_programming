#include <stdio.h>

/**
 * print_to_98 - print fron n to 98
 *
 * @n: int
 *
 */
void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
		if (i > 98)
			i--;
		else
			i++;
	}
	printf("%d\n", 98);
}

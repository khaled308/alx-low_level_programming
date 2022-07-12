#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: pointer
 * @n: int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n && i != 0)
			printf(", ");
		printf("%d", *(a + i));
	}
	printf("\n");
}

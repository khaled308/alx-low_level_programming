#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int sum_diagonal1 = 0,
	    sum_diagonal2 = 0,
	    i,
	    all = size * size;

	while (i < all)
	{
		sum_diagonal1 += a[i];
		i += size + 1;
	}

	i = size - 1;

	while (i < all - 1)
	{
		sum_diagonal2 += a[i];
		i += size - 1;
	}

	printf("%d, %d\n", sum_diagonal1, sum_diagonal2);


}

#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int tmp = *(a + i);

		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
		i++;
	}
}

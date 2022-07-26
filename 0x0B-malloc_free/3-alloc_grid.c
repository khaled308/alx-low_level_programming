#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * width);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * height);

		if (p + i == NULL)
			return (NULL);
	}

	return (p);
}

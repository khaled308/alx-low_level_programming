#include "search_algos.h"


/**
  * interpolation_search - Searches using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The size of the array.
  * @value: The value to search for.
  *
  * Return: Null, -1, the first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}

/**
* main - Entry point
*
* Return: Always EXIT_SUCCESS
* int main(void)
* {
*    int array[] = {
*        0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
*    };
*   size_t size = sizeof(array) / sizeof(array[0]);
*   printf("Found %d at index: %d\n\n", 3,
*   interpolation_search(array, size, 3));
*   printf("Found %d at index: %d\n\n", 7,
*   interpolation_search(array, size, 7));
*   printf("Found %d at index: %d\n", 999,
*   interpolation_search(array, size, 999));
*   return (EXIT_SUCCESS);
* }
*/

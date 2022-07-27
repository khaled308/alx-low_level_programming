#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: pointer to pointer
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int length = 0;
	int i;
	int j = 0;

	if (ac == NULL || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*(*(av + i) + length))
			length++;
	}

	length += ac - 1;
	new_str = malloc(length);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*(*(av + i)))
		{
			*(new_str + j) = *(*(av + i));
			j++;
			*(av + i) += 1;
		}

		*(new_str + j) = '\n';
		j++;
	}

	return (new_str);
}

#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @str: pointer
 * Return: char
 */
char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = {'4', '3', '0', '7', '1'};
	int i = 0;

	while (*(str + i))
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			if (letters[j] == *(str + i))
			{
				int index = j / 2;

				*(str + i) = numbers[index];
			}
		}
		i++;
	}
	return (str);
}

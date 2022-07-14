#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: pointer
 * Return: string
 */

char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (*(str + i))
	{
		int j;

		for (j = 0; j < 13; j++)
		{
			char tmp = *(str + i);
			char letter = *(str + i + 1);

			if (tmp == separators[j] && letter >= 'a' && letter <= 'z')
				*(str + i + 1) = letter - 32;
		}
		i++;
	}

	return (str);
}

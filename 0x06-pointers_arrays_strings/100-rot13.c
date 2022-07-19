#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: pointer
 * Return: string
 */
char *rot13(char *str)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (*(str + i))
	{
		int j;

		for (j = 0; j < 52; j++)
		{
			char tmp = *(str + i);

			if (tmp == input[j])
				*(str + i) = output[j];
		}
		i++;
	}
	return (str);
}

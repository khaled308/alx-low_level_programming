#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: pointer
 */
void rev_string(char *s)
{
	int length = 0;
	int counter = 0;
	char tmp;

	while (*(s + length) != '\0')
		length++;

	while (counter < length / 2)
	{
		tmp = *(s + counter);
		*(s + counter) = *(s + length - 1 - counter);
		*(s + length - 1 - counter) = tmp;
		counter++;
	}

}

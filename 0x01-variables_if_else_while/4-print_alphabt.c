#include<stdio.h>

/**
 *main ->  prints the alphabet in lowercase
 *puts() -> display the given string on the screen
 *Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}

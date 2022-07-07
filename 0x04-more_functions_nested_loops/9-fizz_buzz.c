#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	fizz_buzz();
	return (0);
}


/**
 *fizz_buzz -  prints the numbers from 1 to 100,
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
			printf(" ");

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	printf("\n");
}

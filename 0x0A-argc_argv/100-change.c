#include <stdio.h>
#include <stdlib.h>

/**
 * main - return int
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num,
	    sum = 0,
	    i,
	    coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		int result = num / coins[i];

		sum += result;
		num = num % coins[i];
	}

	printf("%d\n", sum);
	return (0);
}

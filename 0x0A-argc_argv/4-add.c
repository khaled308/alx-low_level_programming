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
    int i,
	sum = 0;

    for (i = 1; i < argc; i++)
    {
	    int num = atoi(argv[i]);

	    if (!num && num + '0' != *argv[i])
	    {
		    printf("Error\n");
		    return (1);
	    }
	    sum += num;
    }
    printf("%d\n", sum);
    return (0);
}

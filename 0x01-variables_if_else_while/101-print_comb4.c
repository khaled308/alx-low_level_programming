#include<stdio.h>

/**
 *main -> prints all possible different combinations of three digits.
 *Return: 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}

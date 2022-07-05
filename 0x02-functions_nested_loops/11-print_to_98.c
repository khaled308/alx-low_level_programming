#include "main.h"

void print_to_98(int n)
{
	int i = n;
	while (i != 98)
	{
		if (i > 9)
		{
			int j = i;
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else
			_putchar(i + '0');	
		
		if (i > 98)
			i--;
		else
			i++;
		
		_putchar(',');
		_putchar(' ');
	}
	_putchar(9 + '0');
	_putchar(8 + '0');
	_putchar('\n');
}

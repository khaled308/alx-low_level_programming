#include "main.h"

/**
 * print_sign - +,1 num > 0
 * -,-1 num < 0
 * 0,0  num = 0
 *
 * @n : int
 *
 * Return: 1 || 0 || -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

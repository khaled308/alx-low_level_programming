#include "main.h"

/**
 * print_last_digit - take num and retun last
 * digit of it
 *
 * @num : int
 *
 * Return: number
 *
 */
int print_last_digit(int num)
{
	int result = num % 10;

	if (result >= 0)
	{
		_putchar(result + 48);
		return (result);
	}
	else
	{
		_putchar(-1 * result + 48);
		return (-1 * result);
	}
}

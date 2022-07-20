#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * Return: number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt(n, i));
}



/**
 * _sqrt - returns the natural square root of a number.
 * @n: int
 * @i: int
 * Return: number
 */
int _sqrt(int n, int i)
{
	if (i > n / 2)
		return (-1);

	if (i * i == n)
		return (i);
	i++;
	return (_sqrt(n, i));
}

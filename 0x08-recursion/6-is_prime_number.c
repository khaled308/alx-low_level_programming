#include "main.h"

/**
 * is_prime_number - check if the number is prime
 * @n: int
 * Return: number
 */
int is_prime_number(int n)
{
	int i = 2;

	return (prime(n, i));
}


/**
 * prime - check if the number is prime
 * @n: int
 * @i: int
 * Return: number
 */

int prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	i++;
	return (prime(n, i));
}

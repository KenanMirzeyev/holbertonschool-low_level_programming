#include "main.h"

/**
 * is_prime_number - prime
 * @n: s
 *
 * Return: n
 */
int is_prime_number(int n)
{
	if (n % 2 == 1)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_number(n + 1));
}


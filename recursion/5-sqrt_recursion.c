#include "main.h"

/**
 * helper_sqrt - recursive helper to find the natural sqrt
 * @n: the number to find sqrt of
 * @guess: the current guess to test
 *
 * Return: the natural sqrt of n, or -1 if none found
 */
int helper_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (helper_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper_sqrt(n, 0));
}

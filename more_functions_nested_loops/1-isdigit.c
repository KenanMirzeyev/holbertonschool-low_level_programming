#include <stdio.h>
/**
 * _isdigit - Entry point
 * @c: check
 *
 * Return: Always 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' &&  c <= '9')
	{
		return (1);
		c++;
	}

	else

	{
		return (0);
	}
}

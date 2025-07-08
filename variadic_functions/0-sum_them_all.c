#include "variadic_functions.h"
#include <stdarg.h>

/**
 * int sum_them_all - sum all of them
 * @n: n
 *
 * Return: return
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int f;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (f = 0 ; f < n ; f++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}


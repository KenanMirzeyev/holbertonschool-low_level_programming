#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: seperate
 * @n: n
 *
 * Return: return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int q;

	va_start(args, n);
	for (q = 0 ; q < n ; q++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && q < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}


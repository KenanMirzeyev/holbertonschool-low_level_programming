#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string
 * @separator: s
 * @n: n
 *
 * Return: r
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	char *f;

	va_start(args, n);

	for (x = 0 ; x < n ; x++)
	{
		f = va_arg(args, char *);

		if (f == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", f);
		}
		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}



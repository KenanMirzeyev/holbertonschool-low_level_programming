#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - all
 * @format: form
 */
void print_all(const char * const format, ...)
{
	va_list(args);
	unsigned int r;
	char *s;
	char *t = "";

	va_start(args, format);

	while (format && format[r])
	{
		if (format[r] == 'c')
		{
			printf("%s%c", t, va_arg(args, int));
		}
		if (format[r] == 'i')
		{
			printf("%s%i", t, va_arg(args, int));
		}
		if (format[r] == 'f')
		{
			printf("%s%f", t, (double)va_arg(args, double));
		}
		if (format[r] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s%s", t, s);
		}

		if(format[r] == 'c' && format[r] == 'i' && format[r] == 'f' && format[r] == 's')
		{
			t = ", ";
		}
		r++;
	}
	va_end(args);
	printf("\n");
}

		



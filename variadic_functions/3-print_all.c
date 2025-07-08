#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list *args, char *sep)
{
	printf("%s%c", sep, va_arg(*args, int));
}

void print_int(va_list *args, char *sep)
{
	printf("%s%d", sep, va_arg(*args, int));
}

void print_float(va_list *args, char *sep)
{
	printf("%s%f", sep, va_arg(*args, double));
}

void print_string(va_list *args, char *sep)
{
	char *str = va_arg(*args, char *);
	if (!str)
		str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";

	struct print_type {
		char symbol;
		void (*print_func)(va_list *args, char *sep);
	};

	struct print_type types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j].symbol)
		{
			if (format[i] == types[j].symbol)
			{
				types[j].print_func(&args, separator);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}


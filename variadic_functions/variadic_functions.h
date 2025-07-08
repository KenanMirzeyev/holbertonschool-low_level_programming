#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print_type - Struct for format symbol and corresponding function
 * @symbol: Format character (e.g., 'c', 'i', 'f', 's')
 * @print_func: Pointer to function that prints the argument
 */
struct print_type
{
	char symbol;
	void (*print_func)(va_list *args, char *sep);
};
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif


#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - reverse
 * @s: s
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar (*s);
}


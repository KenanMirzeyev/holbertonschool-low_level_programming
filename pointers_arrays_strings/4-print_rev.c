#include "main.h"
#include <stdio.h>

/**
 * print_rev - p
 * @s: s
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}

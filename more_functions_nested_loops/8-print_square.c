#include "main.h"
#include <stdio.h>
/**
 * print_square - entry point
 * @size : q
 * Return: 0
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (size < 3)
	{
		i = 0;
		while (i < 3)
		{
			_putchar('#');
			i++;
		}

		_putchar('\n');
		size++;
	}
	while (size < 9)
	{
		i = 0;
		while (i < 9)
		{
			_putchar('#');
			i++;
		}

		_putchar('\n');
		size++;
	}
}

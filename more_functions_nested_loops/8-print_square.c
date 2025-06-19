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

	while (size < 2)
	{
		i = 0;
		while (i < 2)
		{
			_putchar('#');
			i++;
		}

		_putchar('\n');
		size++;
	}
	while (size < 10)
	{
		i = 0;
		while (i < 10)
		{
			_putchar('#');
			i++;
		}

		_putchar('\n');
		size++;
	}
}

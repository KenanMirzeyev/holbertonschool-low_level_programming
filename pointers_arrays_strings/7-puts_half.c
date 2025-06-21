#include "main.h"
#include <stdio.h>

/**
 * puts_half - put
 * @str: str
 *
 * Return: void
 */
void puts_half(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x >= 5)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}

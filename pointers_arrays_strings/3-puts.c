#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - puts the text
 * @str: s
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

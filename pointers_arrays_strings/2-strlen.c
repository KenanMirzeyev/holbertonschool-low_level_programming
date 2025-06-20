#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - length of text
 * @s: y
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

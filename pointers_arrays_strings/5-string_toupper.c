#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - change
 * @str: s
 *
 * Return: d
 */
char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}



#include "main.h"
#include <stdio.h>

/**
 * *leet - leet
 * @str: s
 *
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' && 'A' - 4);
			str[i] = str[i] - ('e' && 'E' - 3);
			str[i] = str[i] - ('o' && 'O' - 0);
			str[i] = str[i] - ('t' && 'T' - 7);
			str[i] = str[i] - ('l' && 'L' - 1);
		}
		i++;
	}

	return (str);
}

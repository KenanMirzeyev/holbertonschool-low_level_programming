#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - strdup
 * @str:str
 *
 * Return: str
 */
char *_strdup(char *str)
{
	char *H;
	int h = 0, g = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[g] != '\0')
	{
		g++;
	}
	H = malloc(sizeof(char) * (g + 1));
	if (H == NULL)
	{
		return (NULL);
	}
	for (h = 0 ; h < g ; h++)
	{
		H[h] = str[h];
	}
	H[h] = '\0';
	return (H);
}

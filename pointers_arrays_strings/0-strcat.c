#include "main.h"
#include <stdio.h>

/**
 * *_strcat - strcat
 * @dest: d
 * @src: s
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		a++;
		i++;
	}

	return (dest);
}

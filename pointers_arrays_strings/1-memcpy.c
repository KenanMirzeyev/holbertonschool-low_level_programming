#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - cpy
 * @dest: dest
 * @src: src
 * @n: n
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0 ; l < n ; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}

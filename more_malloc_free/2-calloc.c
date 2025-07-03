#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - calloc
 * @nmemb: memory
 * @size: size
 *
 * Return: str
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int re;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (re = 0 ; re < nmemb * size ; re++)
	{
		*((char *)str + re) = 0;
	}
	return (str);
}

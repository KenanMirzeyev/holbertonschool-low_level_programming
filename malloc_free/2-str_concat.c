#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - str
 * @s1: s1
 * @s2: s2
 *
 * Return: str
 */
char *str_concat(char *s1, char *s2)
{
	char *V;
	int q = 0, w = 0, e, r;

	if (s1 != NULL)
	{
		while (s1[q] != '\0')
		{
			q++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[w] != '\0')
		{
			w++;
		}
	}
	V = (char *)malloc((w + 1 + q) * sizeof(char));
	if (V == NULL)
	{
		return (NULL);
	}
	for (e = 0 ; e < q ; e++)
	{
		V[e] = s1[e];
	}
	for (r = 0 ; r < w ; r++)
	{
		V[e + r] = s2[r];
	}
	V[e + r] = '\0';

	return (V);
}




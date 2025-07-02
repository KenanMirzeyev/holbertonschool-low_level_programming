#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concat
 * @s1: s1
 * @s2: s2
 * @n: n
 *
 * Return: return
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, q = 0, w = 0;
	char *f;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[q] != '\0')
	{
		q++;
	}
	while (s2[w] != '\0')
	{
		w++;
	}
	if (n >= w)
	{
		n = w;
	}
	f = malloc(q + n + 1);
	if (f == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < q ; i++)
	{
		f[i] = s1[i];
	}
	for (j = 0; j < n ; j++)
	{
		f[i + j] = s2[j];
	}
	f[i + j] = '\0';
	return (f);
}

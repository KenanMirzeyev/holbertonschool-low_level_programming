#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - s
 * @s: s
 * @accept: a
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int r;
	int x;

	for (r = 0 ; s[r] != '\0' ; r++)
	{
		for (x = 0 ; accept[x] != '\0' ; x++)
		{
			if (s[r] == accept[x])
			{
				return (&s[r]);
			}
		}
	}
	return (NULL);
}

